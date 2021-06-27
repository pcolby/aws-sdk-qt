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

#include "listinstalledcomponentsresponse.h"
#include "listinstalledcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListInstalledComponentsResponse
 * \brief The ListInstalledComponentsResponse class provides an interace for GreengrassV2 ListInstalledComponents responses.
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
 * \sa GreengrassV2Client::listInstalledComponents
 */

/*!
 * Constructs a ListInstalledComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstalledComponentsResponse::ListInstalledComponentsResponse(
        const ListInstalledComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListInstalledComponentsResponsePrivate(this), parent)
{
    setRequest(new ListInstalledComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstalledComponentsRequest * ListInstalledComponentsResponse::request() const
{
    return static_cast<const ListInstalledComponentsRequest *>(GreengrassV2Response::request());
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListInstalledComponents \a response.
 */
void ListInstalledComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstalledComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListInstalledComponentsResponsePrivate
 * \brief The ListInstalledComponentsResponsePrivate class provides private implementation for ListInstalledComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListInstalledComponentsResponsePrivate object with public implementation \a q.
 */
ListInstalledComponentsResponsePrivate::ListInstalledComponentsResponsePrivate(
    ListInstalledComponentsResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListInstalledComponents response element from \a xml.
 */
void ListInstalledComponentsResponsePrivate::parseListInstalledComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstalledComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
