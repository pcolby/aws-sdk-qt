// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateentitytothingresponse.h"
#include "associateentitytothingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::AssociateEntityToThingResponse
 * \brief The AssociateEntityToThingResponse class provides an interace for IoTThingsGraph AssociateEntityToThing responses.
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
 * \sa IoTThingsGraphClient::associateEntityToThing
 */

/*!
 * Constructs a AssociateEntityToThingResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateEntityToThingResponse::AssociateEntityToThingResponse(
        const AssociateEntityToThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new AssociateEntityToThingResponsePrivate(this), parent)
{
    setRequest(new AssociateEntityToThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateEntityToThingRequest * AssociateEntityToThingResponse::request() const
{
    Q_D(const AssociateEntityToThingResponse);
    return static_cast<const AssociateEntityToThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph AssociateEntityToThing \a response.
 */
void AssociateEntityToThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateEntityToThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::AssociateEntityToThingResponsePrivate
 * \brief The AssociateEntityToThingResponsePrivate class provides private implementation for AssociateEntityToThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a AssociateEntityToThingResponsePrivate object with public implementation \a q.
 */
AssociateEntityToThingResponsePrivate::AssociateEntityToThingResponsePrivate(
    AssociateEntityToThingResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph AssociateEntityToThing response element from \a xml.
 */
void AssociateEntityToThingResponsePrivate::parseAssociateEntityToThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateEntityToThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
