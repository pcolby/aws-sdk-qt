// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesspoliciesrequest.h"
#include "listaccesspoliciesrequest_p.h"
#include "listaccesspoliciesresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAccessPoliciesRequest
 * \brief The ListAccessPoliciesRequest class provides an interface for IoTSiteWise ListAccessPolicies requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::listAccessPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccessPoliciesRequest::ListAccessPoliciesRequest(const ListAccessPoliciesRequest &other)
    : IoTSiteWiseRequest(new ListAccessPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccessPoliciesRequest object.
 */
ListAccessPoliciesRequest::ListAccessPoliciesRequest()
    : IoTSiteWiseRequest(new ListAccessPoliciesRequestPrivate(IoTSiteWiseRequest::ListAccessPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccessPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccessPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccessPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAccessPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListAccessPoliciesRequestPrivate
 * \brief The ListAccessPoliciesRequestPrivate class provides private implementation for ListAccessPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAccessPoliciesRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListAccessPoliciesRequestPrivate::ListAccessPoliciesRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListAccessPoliciesRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccessPoliciesRequest
 * class' copy constructor.
 */
ListAccessPoliciesRequestPrivate::ListAccessPoliciesRequestPrivate(
    const ListAccessPoliciesRequestPrivate &other, ListAccessPoliciesRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
