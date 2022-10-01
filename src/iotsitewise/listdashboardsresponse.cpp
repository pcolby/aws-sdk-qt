// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdashboardsresponse.h"
#include "listdashboardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListDashboardsResponse
 * \brief The ListDashboardsResponse class provides an interace for IoTSiteWise ListDashboards responses.
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
 * \sa IoTSiteWiseClient::listDashboards
 */

/*!
 * Constructs a ListDashboardsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDashboardsResponse::ListDashboardsResponse(
        const ListDashboardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListDashboardsResponsePrivate(this), parent)
{
    setRequest(new ListDashboardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDashboardsRequest * ListDashboardsResponse::request() const
{
    Q_D(const ListDashboardsResponse);
    return static_cast<const ListDashboardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListDashboards \a response.
 */
void ListDashboardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDashboardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListDashboardsResponsePrivate
 * \brief The ListDashboardsResponsePrivate class provides private implementation for ListDashboardsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListDashboardsResponsePrivate object with public implementation \a q.
 */
ListDashboardsResponsePrivate::ListDashboardsResponsePrivate(
    ListDashboardsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListDashboards response element from \a xml.
 */
void ListDashboardsResponsePrivate::parseListDashboardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDashboardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
