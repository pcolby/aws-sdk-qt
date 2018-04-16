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

#include "createtrafficpolicyversionrequest.h"
#include "createtrafficpolicyversionrequest_p.h"
#include "createtrafficpolicyversionresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionRequest
 *
 * \brief The CreateTrafficPolicyVersionRequest class provides an interface for Route53 CreateTrafficPolicyVersion requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::createTrafficPolicyVersion
 */

/*!
 * @brief  Constructs a new CreateTrafficPolicyVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrafficPolicyVersionRequest::CreateTrafficPolicyVersionRequest(const CreateTrafficPolicyVersionRequest &other)
    : Route53Request(new CreateTrafficPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateTrafficPolicyVersionRequest object.
 */
CreateTrafficPolicyVersionRequest::CreateTrafficPolicyVersionRequest()
    : Route53Request(new CreateTrafficPolicyVersionRequestPrivate(Route53Request::CreateTrafficPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrafficPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateTrafficPolicyVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrafficPolicyVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrafficPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateTrafficPolicyVersionRequestPrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyVersionRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateTrafficPolicyVersionRequest instance.
 */
CreateTrafficPolicyVersionRequestPrivate::CreateTrafficPolicyVersionRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyVersionRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrafficPolicyVersionRequest instance.
 */
CreateTrafficPolicyVersionRequestPrivate::CreateTrafficPolicyVersionRequestPrivate(
    const CreateTrafficPolicyVersionRequestPrivate &other, CreateTrafficPolicyVersionRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
