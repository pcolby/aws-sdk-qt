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

#include "listeffectivedeploymentsresponse.h"
#include "listeffectivedeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListEffectiveDeploymentsResponse
 * \brief The ListEffectiveDeploymentsResponse class provides an interace for GreengrassV2 ListEffectiveDeployments responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  AWS IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge
 *  devices. This enables devices to collect and analyze data closer to the source of information, react autonomously to
 *  local events, and communicate securely with each other on local networks. Local devices can also communicate securely
 *  with AWS IoT Core and export IoT data to the AWS Cloud. AWS IoT Greengrass developers can use AWS Lambda functions and
 *  components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  AWS IoT Greengrass Version 2 provides a new major version of the AWS IoT Greengrass Core software, new APIs, and a new
 *  console. Use this API reference to learn how to use the AWS IoT Greengrass V2 API operations to manage components,
 *  manage deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is AWS IoT
 *  Greengrass?</a> in the <i>AWS IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listEffectiveDeployments
 */

/*!
 * Constructs a ListEffectiveDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEffectiveDeploymentsResponse::ListEffectiveDeploymentsResponse(
        const ListEffectiveDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListEffectiveDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListEffectiveDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEffectiveDeploymentsRequest * ListEffectiveDeploymentsResponse::request() const
{
    Q_D(const ListEffectiveDeploymentsResponse);
    return static_cast<const ListEffectiveDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListEffectiveDeployments \a response.
 */
void ListEffectiveDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEffectiveDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListEffectiveDeploymentsResponsePrivate
 * \brief The ListEffectiveDeploymentsResponsePrivate class provides private implementation for ListEffectiveDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListEffectiveDeploymentsResponsePrivate object with public implementation \a q.
 */
ListEffectiveDeploymentsResponsePrivate::ListEffectiveDeploymentsResponsePrivate(
    ListEffectiveDeploymentsResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListEffectiveDeployments response element from \a xml.
 */
void ListEffectiveDeploymentsResponsePrivate::parseListEffectiveDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEffectiveDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
