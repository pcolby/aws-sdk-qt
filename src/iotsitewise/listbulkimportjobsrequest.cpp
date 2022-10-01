// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbulkimportjobsrequest.h"
#include "listbulkimportjobsrequest_p.h"
#include "listbulkimportjobsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListBulkImportJobsRequest
 * \brief The ListBulkImportJobsRequest class provides an interface for IoTSiteWise ListBulkImportJobs requests.
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
 * \sa IoTSiteWiseClient::listBulkImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBulkImportJobsRequest::ListBulkImportJobsRequest(const ListBulkImportJobsRequest &other)
    : IoTSiteWiseRequest(new ListBulkImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBulkImportJobsRequest object.
 */
ListBulkImportJobsRequest::ListBulkImportJobsRequest()
    : IoTSiteWiseRequest(new ListBulkImportJobsRequestPrivate(IoTSiteWiseRequest::ListBulkImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBulkImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBulkImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBulkImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBulkImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListBulkImportJobsRequestPrivate
 * \brief The ListBulkImportJobsRequestPrivate class provides private implementation for ListBulkImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListBulkImportJobsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListBulkImportJobsRequestPrivate::ListBulkImportJobsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListBulkImportJobsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBulkImportJobsRequest
 * class' copy constructor.
 */
ListBulkImportJobsRequestPrivate::ListBulkImportJobsRequestPrivate(
    const ListBulkImportJobsRequestPrivate &other, ListBulkImportJobsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
