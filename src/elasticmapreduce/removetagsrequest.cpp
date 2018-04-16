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

#include "removetagsrequest.h"
#include "removetagsrequest_p.h"
#include "removetagsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RemoveTagsRequest
 *
 * \brief The RemoveTagsRequest class encapsulates EMR RemoveTags requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::removeTags
 */

/*!
 * @brief  Constructs a new RemoveTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsRequest::RemoveTagsRequest(const RemoveTagsRequest &other)
    : EMRRequest(new RemoveTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RemoveTagsRequest object.
 */
RemoveTagsRequest::RemoveTagsRequest()
    : EMRRequest(new RemoveTagsRequestPrivate(EMRRequest::RemoveTagsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RemoveTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RemoveTagsRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveTagsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public RemoveTagsRequest instance.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const EMRRequest::Action action, RemoveTagsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsRequest instance.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const RemoveTagsRequestPrivate &other, RemoveTagsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
