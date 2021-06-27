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

#include "createflowtemplateresponse.h"
#include "createflowtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::CreateFlowTemplateResponse
 * \brief The CreateFlowTemplateResponse class provides an interace for IoTThingsGraph CreateFlowTemplate responses.
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
 * \sa IoTThingsGraphClient::createFlowTemplate
 */

/*!
 * Constructs a CreateFlowTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFlowTemplateResponse::CreateFlowTemplateResponse(
        const CreateFlowTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new CreateFlowTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateFlowTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFlowTemplateRequest * CreateFlowTemplateResponse::request() const
{
    return static_cast<const CreateFlowTemplateRequest *>(IoTThingsGraphResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph CreateFlowTemplate \a response.
 */
void CreateFlowTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFlowTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::CreateFlowTemplateResponsePrivate
 * \brief The CreateFlowTemplateResponsePrivate class provides private implementation for CreateFlowTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a CreateFlowTemplateResponsePrivate object with public implementation \a q.
 */
CreateFlowTemplateResponsePrivate::CreateFlowTemplateResponsePrivate(
    CreateFlowTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph CreateFlowTemplate response element from \a xml.
 */
void CreateFlowTemplateResponsePrivate::parseCreateFlowTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFlowTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
