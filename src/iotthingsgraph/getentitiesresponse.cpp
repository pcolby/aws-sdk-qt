// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getentitiesresponse.h"
#include "getentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetEntitiesResponse
 * \brief The GetEntitiesResponse class provides an interace for IoTThingsGraph GetEntities responses.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::getEntities
 */

/*!
 * Constructs a GetEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetEntitiesResponse::GetEntitiesResponse(
        const GetEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetEntitiesResponsePrivate(this), parent)
{
    setRequest(new GetEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEntitiesRequest * GetEntitiesResponse::request() const
{
    Q_D(const GetEntitiesResponse);
    return static_cast<const GetEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetEntities \a response.
 */
void GetEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetEntitiesResponsePrivate
 * \brief The GetEntitiesResponsePrivate class provides private implementation for GetEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetEntitiesResponsePrivate object with public implementation \a q.
 */
GetEntitiesResponsePrivate::GetEntitiesResponsePrivate(
    GetEntitiesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetEntities response element from \a xml.
 */
void GetEntitiesResponsePrivate::parseGetEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
