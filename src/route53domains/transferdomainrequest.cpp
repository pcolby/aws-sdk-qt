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

#include "transferdomainrequest.h"
#include "transferdomainrequest_p.h"
#include "transferdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::TransferDomainRequest
 *
 * \brief The TransferDomainRequest class encapsulates Route53Domains TransferDomain requests.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::transferDomain
 */

/*!
 * @brief  Constructs a new TransferDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TransferDomainRequest::TransferDomainRequest(const TransferDomainRequest &other)
    : Route53DomainsRequest(new TransferDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new TransferDomainRequest object.
 */
TransferDomainRequest::TransferDomainRequest()
    : Route53DomainsRequest(new TransferDomainRequestPrivate(Route53DomainsRequest::TransferDomainAction, this))
{

}

/*!
 * \reimp
 */
bool TransferDomainRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an TransferDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TransferDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * TransferDomainRequest::response(QNetworkReply * const reply) const
{
    return new TransferDomainResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  TransferDomainRequestPrivate
 *
 * @brief  Private implementation for TransferDomainRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TransferDomainRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public TransferDomainRequest instance.
 */
TransferDomainRequestPrivate::TransferDomainRequestPrivate(
    const Route53DomainsRequest::Action action, TransferDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new TransferDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TransferDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TransferDomainRequest instance.
 */
TransferDomainRequestPrivate::TransferDomainRequestPrivate(
    const TransferDomainRequestPrivate &other, TransferDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
