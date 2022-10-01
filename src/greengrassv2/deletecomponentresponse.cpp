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

#include "deletecomponentresponse.h"
#include "deletecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::DeleteComponentResponse
 * \brief The DeleteComponentResponse class provides an interace for GreengrassV2 DeleteComponent responses.
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
 * \sa GreengrassV2Client::deleteComponent
 */

/*!
 * Constructs a DeleteComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteComponentResponse::DeleteComponentResponse(
        const DeleteComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new DeleteComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteComponentRequest * DeleteComponentResponse::request() const
{
    Q_D(const DeleteComponentResponse);
    return static_cast<const DeleteComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 DeleteComponent \a response.
 */
void DeleteComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::DeleteComponentResponsePrivate
 * \brief The DeleteComponentResponsePrivate class provides private implementation for DeleteComponentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a DeleteComponentResponsePrivate object with public implementation \a q.
 */
DeleteComponentResponsePrivate::DeleteComponentResponsePrivate(
    DeleteComponentResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 DeleteComponent response element from \a xml.
 */
void DeleteComponentResponsePrivate::parseDeleteComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
