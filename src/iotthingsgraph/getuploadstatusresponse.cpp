// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuploadstatusresponse.h"
#include "getuploadstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetUploadStatusResponse
 * \brief The GetUploadStatusResponse class provides an interace for IoTThingsGraph GetUploadStatus responses.
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
 * \sa IoTThingsGraphClient::getUploadStatus
 */

/*!
 * Constructs a GetUploadStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetUploadStatusResponse::GetUploadStatusResponse(
        const GetUploadStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetUploadStatusResponsePrivate(this), parent)
{
    setRequest(new GetUploadStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUploadStatusRequest * GetUploadStatusResponse::request() const
{
    Q_D(const GetUploadStatusResponse);
    return static_cast<const GetUploadStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetUploadStatus \a response.
 */
void GetUploadStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUploadStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetUploadStatusResponsePrivate
 * \brief The GetUploadStatusResponsePrivate class provides private implementation for GetUploadStatusResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetUploadStatusResponsePrivate object with public implementation \a q.
 */
GetUploadStatusResponsePrivate::GetUploadStatusResponsePrivate(
    GetUploadStatusResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetUploadStatus response element from \a xml.
 */
void GetUploadStatusResponsePrivate::parseGetUploadStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUploadStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
