#' Check if an `externalptr` is a null pointer
#'
#' \code{isnullptr} checks if an object of type `externalptr` is a null pointer.
#'
#' @param pointer object of type `externalptr`
#' @return TRUE if null pointer, FALSE otherwise
#' @useDynLib isnullptr isnullptr_
#' @export
#' @examples
#' isnullptr(new("externalptr"))
#' isnullptr("any_data")
isnullptr <- function(pointer) {
  .Call(isnullptr_, pointer)
}
