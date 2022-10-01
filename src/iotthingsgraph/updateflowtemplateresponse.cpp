// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowtemplateresponse.h"
#include "updateflowtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UpdateFlowTemplateResponse
 * \brief The UpdateFlowTemplateResponse class provides an interace for IoTThingsGraph UpdateFlowTemplate responses.
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
 * \sa IoTThingsGraphClient::updateFlowTemplate
 */

/*!
 * Constructs a UpdateFlowTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowTemplateResponse::UpdateFlowTemplateResponse(
        const UpdateFlowTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new UpdateFlowTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowTemplateRequest * UpdateFlowTemplateResponse::request() const
{
    Q_D(const UpdateFlowTemplateResponse);
    return static_cast<const UpdateFlowTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph UpdateFlowTemplate \a response.
 */
void UpdateFlowTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::UpdateFlowTemplateResponsePrivate
 * \brief The UpdateFlowTemplateResponsePrivate class provides private implementation for UpdateFlowTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UpdateFlowTemplateResponsePrivate object with public implementation \a q.
 */
UpdateFlowTemplateResponsePrivate::UpdateFlowTemplateResponsePrivate(
    UpdateFlowTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph UpdateFlowTemplate response element from \a xml.
 */
void UpdateFlowTemplateResponsePrivate::parseUpdateFlowTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
