// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedashboardresponse.h"
#include "updatedashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateDashboardResponse
 * \brief The UpdateDashboardResponse class provides an interace for IoTSiteWise UpdateDashboard responses.
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
 * \sa IoTSiteWiseClient::updateDashboard
 */

/*!
 * Constructs a UpdateDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDashboardResponse::UpdateDashboardResponse(
        const UpdateDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdateDashboardResponsePrivate(this), parent)
{
    setRequest(new UpdateDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDashboardRequest * UpdateDashboardResponse::request() const
{
    Q_D(const UpdateDashboardResponse);
    return static_cast<const UpdateDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdateDashboard \a response.
 */
void UpdateDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdateDashboardResponsePrivate
 * \brief The UpdateDashboardResponsePrivate class provides private implementation for UpdateDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateDashboardResponsePrivate object with public implementation \a q.
 */
UpdateDashboardResponsePrivate::UpdateDashboardResponsePrivate(
    UpdateDashboardResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdateDashboard response element from \a xml.
 */
void UpdateDashboardResponsePrivate::parseUpdateDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
