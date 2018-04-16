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

#include "createstackrequest.h"
#include "createstackrequest_p.h"
#include "createstackresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateStackRequest
 *
 * \brief The CreateStackRequest class provides an interface for AppStream CreateStack requests.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createStack
 */

/*!
 * @brief  Constructs a new CreateStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStackRequest::CreateStackRequest(const CreateStackRequest &other)
    : AppStreamRequest(new CreateStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateStackRequest object.
 */
CreateStackRequest::CreateStackRequest()
    : AppStreamRequest(new CreateStackRequestPrivate(AppStreamRequest::CreateStackAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStackRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStackResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStackRequest::response(QNetworkReply * const reply) const
{
    return new CreateStackResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateStackRequestPrivate
 *
 * @brief  Private implementation for CreateStackRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStackRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public CreateStackRequest instance.
 */
CreateStackRequestPrivate::CreateStackRequestPrivate(
    const AppStreamRequest::Action action, CreateStackRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStackRequest instance.
 */
CreateStackRequestPrivate::CreateStackRequestPrivate(
    const CreateStackRequestPrivate &other, CreateStackRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
