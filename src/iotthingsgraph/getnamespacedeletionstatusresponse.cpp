// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnamespacedeletionstatusresponse.h"
#include "getnamespacedeletionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetNamespaceDeletionStatusResponse
 * \brief The GetNamespaceDeletionStatusResponse class provides an interace for IoTThingsGraph GetNamespaceDeletionStatus responses.
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
 * \sa IoTThingsGraphClient::getNamespaceDeletionStatus
 */

/*!
 * Constructs a GetNamespaceDeletionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetNamespaceDeletionStatusResponse::GetNamespaceDeletionStatusResponse(
        const GetNamespaceDeletionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetNamespaceDeletionStatusResponsePrivate(this), parent)
{
    setRequest(new GetNamespaceDeletionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNamespaceDeletionStatusRequest * GetNamespaceDeletionStatusResponse::request() const
{
    Q_D(const GetNamespaceDeletionStatusResponse);
    return static_cast<const GetNamespaceDeletionStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetNamespaceDeletionStatus \a response.
 */
void GetNamespaceDeletionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNamespaceDeletionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetNamespaceDeletionStatusResponsePrivate
 * \brief The GetNamespaceDeletionStatusResponsePrivate class provides private implementation for GetNamespaceDeletionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetNamespaceDeletionStatusResponsePrivate object with public implementation \a q.
 */
GetNamespaceDeletionStatusResponsePrivate::GetNamespaceDeletionStatusResponsePrivate(
    GetNamespaceDeletionStatusResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetNamespaceDeletionStatus response element from \a xml.
 */
void GetNamespaceDeletionStatusResponsePrivate::parseGetNamespaceDeletionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamespaceDeletionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
