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

#include "listcomponentversionsresponse.h"
#include "listcomponentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListComponentVersionsResponse
 * \brief The ListComponentVersionsResponse class provides an interace for GreengrassV2 ListComponentVersions responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listComponentVersions
 */

/*!
 * Constructs a ListComponentVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListComponentVersionsResponse::ListComponentVersionsResponse(
        const ListComponentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListComponentVersionsResponsePrivate(this), parent)
{
    setRequest(new ListComponentVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComponentVersionsRequest * ListComponentVersionsResponse::request() const
{
    Q_D(const ListComponentVersionsResponse);
    return static_cast<const ListComponentVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListComponentVersions \a response.
 */
void ListComponentVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComponentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListComponentVersionsResponsePrivate
 * \brief The ListComponentVersionsResponsePrivate class provides private implementation for ListComponentVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListComponentVersionsResponsePrivate object with public implementation \a q.
 */
ListComponentVersionsResponsePrivate::ListComponentVersionsResponsePrivate(
    ListComponentVersionsResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListComponentVersions response element from \a xml.
 */
void ListComponentVersionsResponsePrivate::parseListComponentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComponentVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
