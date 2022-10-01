// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassetrequest.h"
#include "createassetrequest_p.h"
#include "createassetresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateAssetRequest
 * \brief The CreateAssetRequest class provides an interface for IoTSiteWise CreateAsset requests.
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
 * \sa IoTSiteWiseClient::createAsset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssetRequest::CreateAssetRequest(const CreateAssetRequest &other)
    : IoTSiteWiseRequest(new CreateAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssetRequest object.
 */
CreateAssetRequest::CreateAssetRequest()
    : IoTSiteWiseRequest(new CreateAssetRequestPrivate(IoTSiteWiseRequest::CreateAssetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssetRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssetResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreateAssetRequestPrivate
 * \brief The CreateAssetRequestPrivate class provides private implementation for CreateAssetRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateAssetRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreateAssetRequestPrivate::CreateAssetRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreateAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssetRequest
 * class' copy constructor.
 */
CreateAssetRequestPrivate::CreateAssetRequestPrivate(
    const CreateAssetRequestPrivate &other, CreateAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
