/*
    Copyright 2013-2020 Paul Colby

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

#include "updatesystemtemplateresponse.h"
#include "updatesystemtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UpdateSystemTemplateResponse
 * \brief The UpdateSystemTemplateResponse class provides an interace for IoTThingsGraph UpdateSystemTemplate responses.
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
 * \sa IoTThingsGraphClient::updateSystemTemplate
 */

/*!
 * Constructs a UpdateSystemTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSystemTemplateResponse::UpdateSystemTemplateResponse(
        const UpdateSystemTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new UpdateSystemTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateSystemTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSystemTemplateRequest * UpdateSystemTemplateResponse::request() const
{
    Q_D(const UpdateSystemTemplateResponse);
    return static_cast<const UpdateSystemTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph UpdateSystemTemplate \a response.
 */
void UpdateSystemTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSystemTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::UpdateSystemTemplateResponsePrivate
 * \brief The UpdateSystemTemplateResponsePrivate class provides private implementation for UpdateSystemTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UpdateSystemTemplateResponsePrivate object with public implementation \a q.
 */
UpdateSystemTemplateResponsePrivate::UpdateSystemTemplateResponsePrivate(
    UpdateSystemTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph UpdateSystemTemplate response element from \a xml.
 */
void UpdateSystemTemplateResponsePrivate::parseUpdateSystemTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSystemTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
