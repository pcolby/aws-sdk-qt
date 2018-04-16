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

#include "deletestackrequest.h"
#include "deletestackrequest_p.h"
#include "deletestackresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteStackRequest
 *
 * \brief The DeleteStackRequest class provides an interface for AppStream DeleteStack requests.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteStack
 */

/*!
 * @brief  Constructs a new DeleteStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStackRequest::DeleteStackRequest(const DeleteStackRequest &other)
    : AppStreamRequest(new DeleteStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteStackRequest object.
 */
DeleteStackRequest::DeleteStackRequest()
    : AppStreamRequest(new DeleteStackRequestPrivate(AppStreamRequest::DeleteStackAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStackRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStackResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStackRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStackResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteStackRequestPrivate
 *
 * @brief  Private implementation for DeleteStackRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteStackRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DeleteStackRequest instance.
 */
DeleteStackRequestPrivate::DeleteStackRequestPrivate(
    const AppStreamRequest::Action action, DeleteStackRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStackRequest instance.
 */
DeleteStackRequestPrivate::DeleteStackRequestPrivate(
    const DeleteStackRequestPrivate &other, DeleteStackRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
