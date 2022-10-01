// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbulkimportjobsresponse.h"
#include "listbulkimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListBulkImportJobsResponse
 * \brief The ListBulkImportJobsResponse class provides an interace for IoTSiteWise ListBulkImportJobs responses.
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
 * Constructs a ListBulkImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBulkImportJobsResponse::ListBulkImportJobsResponse(
        const ListBulkImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListBulkImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListBulkImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBulkImportJobsRequest * ListBulkImportJobsResponse::request() const
{
    Q_D(const ListBulkImportJobsResponse);
    return static_cast<const ListBulkImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListBulkImportJobs \a response.
 */
void ListBulkImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBulkImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListBulkImportJobsResponsePrivate
 * \brief The ListBulkImportJobsResponsePrivate class provides private implementation for ListBulkImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListBulkImportJobsResponsePrivate object with public implementation \a q.
 */
ListBulkImportJobsResponsePrivate::ListBulkImportJobsResponsePrivate(
    ListBulkImportJobsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListBulkImportJobs response element from \a xml.
 */
void ListBulkImportJobsResponsePrivate::parseListBulkImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBulkImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
