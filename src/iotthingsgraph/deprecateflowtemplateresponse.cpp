// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecateflowtemplateresponse.h"
#include "deprecateflowtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeprecateFlowTemplateResponse
 * \brief The DeprecateFlowTemplateResponse class provides an interace for IoTThingsGraph DeprecateFlowTemplate responses.
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
 * \sa IoTThingsGraphClient::deprecateFlowTemplate
 */

/*!
 * Constructs a DeprecateFlowTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeprecateFlowTemplateResponse::DeprecateFlowTemplateResponse(
        const DeprecateFlowTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DeprecateFlowTemplateResponsePrivate(this), parent)
{
    setRequest(new DeprecateFlowTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeprecateFlowTemplateRequest * DeprecateFlowTemplateResponse::request() const
{
    Q_D(const DeprecateFlowTemplateResponse);
    return static_cast<const DeprecateFlowTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DeprecateFlowTemplate \a response.
 */
void DeprecateFlowTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeprecateFlowTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DeprecateFlowTemplateResponsePrivate
 * \brief The DeprecateFlowTemplateResponsePrivate class provides private implementation for DeprecateFlowTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeprecateFlowTemplateResponsePrivate object with public implementation \a q.
 */
DeprecateFlowTemplateResponsePrivate::DeprecateFlowTemplateResponsePrivate(
    DeprecateFlowTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DeprecateFlowTemplate response element from \a xml.
 */
void DeprecateFlowTemplateResponsePrivate::parseDeprecateFlowTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateFlowTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
