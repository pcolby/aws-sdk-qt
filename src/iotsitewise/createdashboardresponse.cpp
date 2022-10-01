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

#include "createdashboardresponse.h"
#include "createdashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateDashboardResponse
 * \brief The CreateDashboardResponse class provides an interace for IoTSiteWise CreateDashboard responses.
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
 * \sa IoTSiteWiseClient::createDashboard
 */

/*!
 * Constructs a CreateDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDashboardResponse::CreateDashboardResponse(
        const CreateDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new CreateDashboardResponsePrivate(this), parent)
{
    setRequest(new CreateDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDashboardRequest * CreateDashboardResponse::request() const
{
    Q_D(const CreateDashboardResponse);
    return static_cast<const CreateDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise CreateDashboard \a response.
 */
void CreateDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::CreateDashboardResponsePrivate
 * \brief The CreateDashboardResponsePrivate class provides private implementation for CreateDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateDashboardResponsePrivate object with public implementation \a q.
 */
CreateDashboardResponsePrivate::CreateDashboardResponsePrivate(
    CreateDashboardResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise CreateDashboard response element from \a xml.
 */
void CreateDashboardResponsePrivate::parseCreateDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
