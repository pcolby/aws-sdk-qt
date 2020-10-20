/*
    Copyright 2013-2020 Paul Colby

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

#include "stopbulkdeploymentresponse.h"
#include "stopbulkdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::StopBulkDeploymentResponse
 * \brief The StopBulkDeploymentResponse class provides an interace for Greengrass StopBulkDeployment responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::stopBulkDeployment
 */

/*!
 * Constructs a StopBulkDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
StopBulkDeploymentResponse::StopBulkDeploymentResponse(
        const StopBulkDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new StopBulkDeploymentResponsePrivate(this), parent)
{
    setRequest(new StopBulkDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBulkDeploymentRequest * StopBulkDeploymentResponse::request() const
{
    Q_D(const StopBulkDeploymentResponse);
    return static_cast<const StopBulkDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass StopBulkDeployment \a response.
 */
void StopBulkDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBulkDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::StopBulkDeploymentResponsePrivate
 * \brief The StopBulkDeploymentResponsePrivate class provides private implementation for StopBulkDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a StopBulkDeploymentResponsePrivate object with public implementation \a q.
 */
StopBulkDeploymentResponsePrivate::StopBulkDeploymentResponsePrivate(
    StopBulkDeploymentResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass StopBulkDeployment response element from \a xml.
 */
void StopBulkDeploymentResponsePrivate::parseStopBulkDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBulkDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
