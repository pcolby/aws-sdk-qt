/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
    return static_cast<const UpdateDashboardRequest *>(IoTSiteWiseResponse::request());
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
