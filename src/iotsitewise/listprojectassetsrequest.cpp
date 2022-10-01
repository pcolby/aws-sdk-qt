// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectassetsrequest.h"
#include "listprojectassetsrequest_p.h"
#include "listprojectassetsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListProjectAssetsRequest
 * \brief The ListProjectAssetsRequest class provides an interface for IoTSiteWise ListProjectAssets requests.
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
 * \sa IoTSiteWiseClient::listProjectAssets
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectAssetsRequest::ListProjectAssetsRequest(const ListProjectAssetsRequest &other)
    : IoTSiteWiseRequest(new ListProjectAssetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectAssetsRequest object.
 */
ListProjectAssetsRequest::ListProjectAssetsRequest()
    : IoTSiteWiseRequest(new ListProjectAssetsRequestPrivate(IoTSiteWiseRequest::ListProjectAssetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProjectAssetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProjectAssetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProjectAssetsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectAssetsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListProjectAssetsRequestPrivate
 * \brief The ListProjectAssetsRequestPrivate class provides private implementation for ListProjectAssetsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListProjectAssetsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListProjectAssetsRequestPrivate::ListProjectAssetsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListProjectAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProjectAssetsRequest
 * class' copy constructor.
 */
ListProjectAssetsRequestPrivate::ListProjectAssetsRequestPrivate(
    const ListProjectAssetsRequestPrivate &other, ListProjectAssetsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
