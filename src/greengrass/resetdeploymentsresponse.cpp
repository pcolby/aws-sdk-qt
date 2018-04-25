/*
    Copyright 2013-2018 Paul Colby

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

#include "resetdeploymentsresponse.h"
#include "resetdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ResetDeploymentsResponse
 * \brief The ResetDeploymentsResponse class provides an interace for Greengrass ResetDeployments responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::resetDeployments
 */

/*!
 * Constructs a ResetDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ResetDeploymentsResponse::ResetDeploymentsResponse(
        const ResetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ResetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ResetDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetDeploymentsRequest * ResetDeploymentsResponse::request() const
{
    Q_D(const ResetDeploymentsResponse);
    return static_cast<const ResetDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ResetDeployments \a response.
 */
void ResetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ResetDeploymentsResponsePrivate
 * \brief The ResetDeploymentsResponsePrivate class provides private implementation for ResetDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ResetDeploymentsResponsePrivate object with public implementation \a q.
 */
ResetDeploymentsResponsePrivate::ResetDeploymentsResponsePrivate(
    ResetDeploymentsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ResetDeployments response element from \a xml.
 */
void ResetDeploymentsResponsePrivate::parseResetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDeploymentsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
