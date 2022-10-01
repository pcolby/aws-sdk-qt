// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getflowtemplateresponse.h"
#include "getflowtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetFlowTemplateResponse
 * \brief The GetFlowTemplateResponse class provides an interace for IoTThingsGraph GetFlowTemplate responses.
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
 * \sa IoTThingsGraphClient::getFlowTemplate
 */

/*!
 * Constructs a GetFlowTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetFlowTemplateResponse::GetFlowTemplateResponse(
        const GetFlowTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetFlowTemplateResponsePrivate(this), parent)
{
    setRequest(new GetFlowTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFlowTemplateRequest * GetFlowTemplateResponse::request() const
{
    Q_D(const GetFlowTemplateResponse);
    return static_cast<const GetFlowTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetFlowTemplate \a response.
 */
void GetFlowTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFlowTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetFlowTemplateResponsePrivate
 * \brief The GetFlowTemplateResponsePrivate class provides private implementation for GetFlowTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetFlowTemplateResponsePrivate object with public implementation \a q.
 */
GetFlowTemplateResponsePrivate::GetFlowTemplateResponsePrivate(
    GetFlowTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetFlowTemplate response element from \a xml.
 */
void GetFlowTemplateResponsePrivate::parseGetFlowTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFlowTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
