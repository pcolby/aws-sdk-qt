// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassetmodelrequest.h"
#include "createassetmodelrequest_p.h"
#include "createassetmodelresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateAssetModelRequest
 * \brief The CreateAssetModelRequest class provides an interface for IoTSiteWise CreateAssetModel requests.
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
 * \sa IoTSiteWiseClient::createAssetModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssetModelRequest::CreateAssetModelRequest(const CreateAssetModelRequest &other)
    : IoTSiteWiseRequest(new CreateAssetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssetModelRequest object.
 */
CreateAssetModelRequest::CreateAssetModelRequest()
    : IoTSiteWiseRequest(new CreateAssetModelRequestPrivate(IoTSiteWiseRequest::CreateAssetModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAssetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssetModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssetModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreateAssetModelRequestPrivate
 * \brief The CreateAssetModelRequestPrivate class provides private implementation for CreateAssetModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateAssetModelRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreateAssetModelRequestPrivate::CreateAssetModelRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreateAssetModelRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssetModelRequest
 * class' copy constructor.
 */
CreateAssetModelRequestPrivate::CreateAssetModelRequestPrivate(
    const CreateAssetModelRequestPrivate &other, CreateAssetModelRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
