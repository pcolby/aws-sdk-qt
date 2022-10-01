// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsystemtemplaterevisionsresponse.h"
#include "getsystemtemplaterevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateRevisionsResponse
 * \brief The GetSystemTemplateRevisionsResponse class provides an interace for IoTThingsGraph GetSystemTemplateRevisions responses.
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
 * \sa IoTThingsGraphClient::getSystemTemplateRevisions
 */

/*!
 * Constructs a GetSystemTemplateRevisionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSystemTemplateRevisionsResponse::GetSystemTemplateRevisionsResponse(
        const GetSystemTemplateRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetSystemTemplateRevisionsResponsePrivate(this), parent)
{
    setRequest(new GetSystemTemplateRevisionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSystemTemplateRevisionsRequest * GetSystemTemplateRevisionsResponse::request() const
{
    Q_D(const GetSystemTemplateRevisionsResponse);
    return static_cast<const GetSystemTemplateRevisionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetSystemTemplateRevisions \a response.
 */
void GetSystemTemplateRevisionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSystemTemplateRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateRevisionsResponsePrivate
 * \brief The GetSystemTemplateRevisionsResponsePrivate class provides private implementation for GetSystemTemplateRevisionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetSystemTemplateRevisionsResponsePrivate object with public implementation \a q.
 */
GetSystemTemplateRevisionsResponsePrivate::GetSystemTemplateRevisionsResponsePrivate(
    GetSystemTemplateRevisionsResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetSystemTemplateRevisions response element from \a xml.
 */
void GetSystemTemplateRevisionsResponsePrivate::parseGetSystemTemplateRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSystemTemplateRevisionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
