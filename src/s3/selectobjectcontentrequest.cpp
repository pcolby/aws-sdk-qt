/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "selectobjectcontentrequest.h"
#include "selectobjectcontentrequest_p.h"
#include "selectobjectcontentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::SelectObjectContentRequest
 *
 * \brief The SelectObjectContentRequest class encapsulates S3 SelectObjectContent requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::selectObjectContent
 */

/*!
 * @brief  Constructs a new SelectObjectContentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SelectObjectContentRequest::SelectObjectContentRequest(const SelectObjectContentRequest &other)
    : S3Request(new SelectObjectContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SelectObjectContentRequest object.
 */
SelectObjectContentRequest::SelectObjectContentRequest()
    : S3Request(new SelectObjectContentRequestPrivate(S3Request::SelectObjectContentAction, this))
{

}

/*!
 * \reimp
 */
bool SelectObjectContentRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SelectObjectContentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SelectObjectContentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * SelectObjectContentRequest::response(QNetworkReply * const reply) const
{
    return new SelectObjectContentResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SelectObjectContentRequestPrivate
 *
 * @brief  Private implementation for SelectObjectContentRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SelectObjectContentRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public SelectObjectContentRequest instance.
 */
SelectObjectContentRequestPrivate::SelectObjectContentRequestPrivate(
    const S3Request::Action action, SelectObjectContentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SelectObjectContentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SelectObjectContentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SelectObjectContentRequest instance.
 */
SelectObjectContentRequestPrivate::SelectObjectContentRequestPrivate(
    const SelectObjectContentRequestPrivate &other, SelectObjectContentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
