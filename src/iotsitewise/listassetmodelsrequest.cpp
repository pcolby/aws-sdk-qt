// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassetmodelsrequest.h"
#include "listassetmodelsrequest_p.h"
#include "listassetmodelsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAssetModelsRequest
 * \brief The ListAssetModelsRequest class provides an interface for IoTSiteWise ListAssetModels requests.
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
 * \sa IoTSiteWiseClient::listAssetModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssetModelsRequest::ListAssetModelsRequest(const ListAssetModelsRequest &other)
    : IoTSiteWiseRequest(new ListAssetModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssetModelsRequest object.
 */
ListAssetModelsRequest::ListAssetModelsRequest()
    : IoTSiteWiseRequest(new ListAssetModelsRequestPrivate(IoTSiteWiseRequest::ListAssetModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssetModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssetModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssetModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssetModelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListAssetModelsRequestPrivate
 * \brief The ListAssetModelsRequestPrivate class provides private implementation for ListAssetModelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAssetModelsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListAssetModelsRequestPrivate::ListAssetModelsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListAssetModelsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssetModelsRequest
 * class' copy constructor.
 */
ListAssetModelsRequestPrivate::ListAssetModelsRequestPrivate(
    const ListAssetModelsRequestPrivate &other, ListAssetModelsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
