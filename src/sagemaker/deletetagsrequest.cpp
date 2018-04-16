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

#include "deletetagsrequest.h"
#include "deletetagsrequest_p.h"
#include "deletetagsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteTagsRequest
 *
 * \brief The DeleteTagsRequest class encapsulates SageMaker DeleteTags requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::deleteTags
 */

/*!
 * @brief  Constructs a new DeleteTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTagsRequest::DeleteTagsRequest(const DeleteTagsRequest &other)
    : SageMakerRequest(new DeleteTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteTagsRequest object.
 */
DeleteTagsRequest::DeleteTagsRequest()
    : SageMakerRequest(new DeleteTagsRequestPrivate(SageMakerRequest::DeleteTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteTagsRequestPrivate
 *
 * @brief  Private implementation for DeleteTagsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTagsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DeleteTagsRequest instance.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const SageMakerRequest::Action action, DeleteTagsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTagsRequest instance.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const DeleteTagsRequestPrivate &other, DeleteTagsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
