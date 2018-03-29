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

#include "updatedomaincontactrequest.h"
#include "updatedomaincontactrequest_p.h"
#include "updatedomaincontactresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  UpdateDomainContactRequest
 *
 * @brief  Implements Route53Domains UpdateDomainContact requests.
 *
 * @see    Route53DomainsClient::updateDomainContact
 */

/**
 * @brief  Constructs a new UpdateDomainContactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDomainContactRequest::UpdateDomainContactRequest(const UpdateDomainContactRequest &other)
    : Route53DomainsRequest(new UpdateDomainContactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDomainContactRequest object.
 */
UpdateDomainContactRequest::UpdateDomainContactRequest()
    : Route53DomainsRequest(new UpdateDomainContactRequestPrivate(Route53DomainsRequest::UpdateDomainContactAction, this))
{

}

bool UpdateDomainContactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDomainContactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDomainContactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainContactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainContactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDomainContactRequestPrivate
 *
 * @brief  Private implementation for UpdateDomainContactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainContactRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public UpdateDomainContactRequest instance.
 */
UpdateDomainContactRequestPrivate::UpdateDomainContactRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainContactRequest * const q)
    : UpdateDomainContactPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainContactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainContactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDomainContactRequest instance.
 */
UpdateDomainContactRequestPrivate::UpdateDomainContactRequestPrivate(
    const UpdateDomainContactRequestPrivate &other, UpdateDomainContactRequest * const q)
    : UpdateDomainContactPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
