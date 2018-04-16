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

#include "updatetagsfordomainrequest.h"
#include "updatetagsfordomainrequest_p.h"
#include "updatetagsfordomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateTagsForDomainRequest
 *
 * \brief The UpdateTagsForDomainRequest class provides an interface for Route53Domains UpdateTagsForDomain requests.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateTagsForDomain
 */

/*!
 * @brief  Constructs a new UpdateTagsForDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTagsForDomainRequest::UpdateTagsForDomainRequest(const UpdateTagsForDomainRequest &other)
    : Route53DomainsRequest(new UpdateTagsForDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateTagsForDomainRequest object.
 */
UpdateTagsForDomainRequest::UpdateTagsForDomainRequest()
    : Route53DomainsRequest(new UpdateTagsForDomainRequestPrivate(Route53DomainsRequest::UpdateTagsForDomainAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTagsForDomainRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateTagsForDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTagsForDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTagsForDomainRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTagsForDomainResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateTagsForDomainRequestPrivate
 *
 * @brief  Private implementation for UpdateTagsForDomainRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateTagsForDomainRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public UpdateTagsForDomainRequest instance.
 */
UpdateTagsForDomainRequestPrivate::UpdateTagsForDomainRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateTagsForDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTagsForDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTagsForDomainRequest instance.
 */
UpdateTagsForDomainRequestPrivate::UpdateTagsForDomainRequestPrivate(
    const UpdateTagsForDomainRequestPrivate &other, UpdateTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
