// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getflowtemplaterevisionsresponse.h"
#include "getflowtemplaterevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetFlowTemplateRevisionsResponse
 * \brief The GetFlowTemplateRevisionsResponse class provides an interace for IoTThingsGraph GetFlowTemplateRevisions responses.
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
 * \sa IoTThingsGraphClient::getFlowTemplateRevisions
 */

/*!
 * Constructs a GetFlowTemplateRevisionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetFlowTemplateRevisionsResponse::GetFlowTemplateRevisionsResponse(
        const GetFlowTemplateRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetFlowTemplateRevisionsResponsePrivate(this), parent)
{
    setRequest(new GetFlowTemplateRevisionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFlowTemplateRevisionsRequest * GetFlowTemplateRevisionsResponse::request() const
{
    Q_D(const GetFlowTemplateRevisionsResponse);
    return static_cast<const GetFlowTemplateRevisionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetFlowTemplateRevisions \a response.
 */
void GetFlowTemplateRevisionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFlowTemplateRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetFlowTemplateRevisionsResponsePrivate
 * \brief The GetFlowTemplateRevisionsResponsePrivate class provides private implementation for GetFlowTemplateRevisionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetFlowTemplateRevisionsResponsePrivate object with public implementation \a q.
 */
GetFlowTemplateRevisionsResponsePrivate::GetFlowTemplateRevisionsResponsePrivate(
    GetFlowTemplateRevisionsResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetFlowTemplateRevisions response element from \a xml.
 */
void GetFlowTemplateRevisionsResponsePrivate::parseGetFlowTemplateRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFlowTemplateRevisionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
