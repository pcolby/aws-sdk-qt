// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebulkimportjobrequest.h"
#include "describebulkimportjobrequest_p.h"
#include "describebulkimportjobresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeBulkImportJobRequest
 * \brief The DescribeBulkImportJobRequest class provides an interface for IoTSiteWise DescribeBulkImportJob requests.
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
 * \sa IoTSiteWiseClient::describeBulkImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBulkImportJobRequest::DescribeBulkImportJobRequest(const DescribeBulkImportJobRequest &other)
    : IoTSiteWiseRequest(new DescribeBulkImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBulkImportJobRequest object.
 */
DescribeBulkImportJobRequest::DescribeBulkImportJobRequest()
    : IoTSiteWiseRequest(new DescribeBulkImportJobRequestPrivate(IoTSiteWiseRequest::DescribeBulkImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBulkImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBulkImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBulkImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBulkImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeBulkImportJobRequestPrivate
 * \brief The DescribeBulkImportJobRequestPrivate class provides private implementation for DescribeBulkImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeBulkImportJobRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeBulkImportJobRequestPrivate::DescribeBulkImportJobRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeBulkImportJobRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBulkImportJobRequest
 * class' copy constructor.
 */
DescribeBulkImportJobRequestPrivate::DescribeBulkImportJobRequestPrivate(
    const DescribeBulkImportJobRequestPrivate &other, DescribeBulkImportJobRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
