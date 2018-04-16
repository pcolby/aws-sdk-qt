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

#include "viewbillingrequest.h"
#include "viewbillingrequest_p.h"
#include "viewbillingresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ViewBillingRequest
 *
 * \brief The ViewBillingRequest class provides an interface for Route53Domains ViewBilling requests.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::viewBilling
 */

/*!
 * @brief  Constructs a new ViewBillingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ViewBillingRequest::ViewBillingRequest(const ViewBillingRequest &other)
    : Route53DomainsRequest(new ViewBillingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ViewBillingRequest object.
 */
ViewBillingRequest::ViewBillingRequest()
    : Route53DomainsRequest(new ViewBillingRequestPrivate(Route53DomainsRequest::ViewBillingAction, this))
{

}

/*!
 * \reimp
 */
bool ViewBillingRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ViewBillingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ViewBillingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * ViewBillingRequest::response(QNetworkReply * const reply) const
{
    return new ViewBillingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ViewBillingRequestPrivate
 *
 * @brief  Private implementation for ViewBillingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ViewBillingRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public ViewBillingRequest instance.
 */
ViewBillingRequestPrivate::ViewBillingRequestPrivate(
    const Route53DomainsRequest::Action action, ViewBillingRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ViewBillingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ViewBillingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ViewBillingRequest instance.
 */
ViewBillingRequestPrivate::ViewBillingRequestPrivate(
    const ViewBillingRequestPrivate &other, ViewBillingRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
