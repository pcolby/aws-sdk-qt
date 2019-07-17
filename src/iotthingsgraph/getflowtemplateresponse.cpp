/*
    Copyright 2013-2019 Paul Colby

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
