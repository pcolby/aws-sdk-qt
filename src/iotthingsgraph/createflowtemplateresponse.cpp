// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
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
    Q_D(const CreateFlowTemplateResponse);
    return static_cast<const CreateFlowTemplateRequest *>(d->request);
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
