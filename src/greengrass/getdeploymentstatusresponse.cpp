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

#include "getdeploymentstatusresponse.h"
#include "getdeploymentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusResponse
 * \brief The GetDeploymentStatusResponse class provides an interace for Greengrass GetDeploymentStatus responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeploymentStatus
 */

/*!
 * Constructs a GetDeploymentStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentStatusResponse::GetDeploymentStatusResponse(
        const GetDeploymentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeploymentStatusResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentStatusRequest * GetDeploymentStatusResponse::request() const
{
    Q_D(const GetDeploymentStatusResponse);
    return static_cast<const GetDeploymentStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetDeploymentStatus \a response.
 */
void GetDeploymentStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusResponsePrivate
 * \brief The GetDeploymentStatusResponsePrivate class provides private implementation for GetDeploymentStatusResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeploymentStatusResponsePrivate object with public implementation \a q.
 */
GetDeploymentStatusResponsePrivate::GetDeploymentStatusResponsePrivate(
    GetDeploymentStatusResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetDeploymentStatus response element from \a xml.
 */
void GetDeploymentStatusResponsePrivate::parseGetDeploymentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
