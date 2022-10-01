// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedashboardresponse.h"
#include "deletedashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteDashboardResponse
 * \brief The DeleteDashboardResponse class provides an interace for IoTSiteWise DeleteDashboard responses.
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
 * \sa IoTSiteWiseClient::deleteDashboard
 */

/*!
 * Constructs a DeleteDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDashboardResponse::DeleteDashboardResponse(
        const DeleteDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeleteDashboardResponsePrivate(this), parent)
{
    setRequest(new DeleteDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDashboardRequest * DeleteDashboardResponse::request() const
{
    Q_D(const DeleteDashboardResponse);
    return static_cast<const DeleteDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeleteDashboard \a response.
 */
void DeleteDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeleteDashboardResponsePrivate
 * \brief The DeleteDashboardResponsePrivate class provides private implementation for DeleteDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteDashboardResponsePrivate object with public implementation \a q.
 */
DeleteDashboardResponsePrivate::DeleteDashboardResponsePrivate(
    DeleteDashboardResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeleteDashboard response element from \a xml.
 */
void DeleteDashboardResponsePrivate::parseDeleteDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
