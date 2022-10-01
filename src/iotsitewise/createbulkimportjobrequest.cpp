// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbulkimportjobrequest.h"
#include "createbulkimportjobrequest_p.h"
#include "createbulkimportjobresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateBulkImportJobRequest
 * \brief The CreateBulkImportJobRequest class provides an interface for IoTSiteWise CreateBulkImportJob requests.
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
 * \sa IoTSiteWiseClient::createBulkImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBulkImportJobRequest::CreateBulkImportJobRequest(const CreateBulkImportJobRequest &other)
    : IoTSiteWiseRequest(new CreateBulkImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBulkImportJobRequest object.
 */
CreateBulkImportJobRequest::CreateBulkImportJobRequest()
    : IoTSiteWiseRequest(new CreateBulkImportJobRequestPrivate(IoTSiteWiseRequest::CreateBulkImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBulkImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBulkImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBulkImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateBulkImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::CreateBulkImportJobRequestPrivate
 * \brief The CreateBulkImportJobRequestPrivate class provides private implementation for CreateBulkImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateBulkImportJobRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
CreateBulkImportJobRequestPrivate::CreateBulkImportJobRequestPrivate(
    const IoTSiteWiseRequest::Action action, CreateBulkImportJobRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBulkImportJobRequest
 * class' copy constructor.
 */
CreateBulkImportJobRequestPrivate::CreateBulkImportJobRequestPrivate(
    const CreateBulkImportJobRequestPrivate &other, CreateBulkImportJobRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
