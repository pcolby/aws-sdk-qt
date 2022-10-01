// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecatesystemtemplateresponse.h"
#include "deprecatesystemtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeprecateSystemTemplateResponse
 * \brief The DeprecateSystemTemplateResponse class provides an interace for IoTThingsGraph DeprecateSystemTemplate responses.
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
 * \sa IoTThingsGraphClient::deprecateSystemTemplate
 */

/*!
 * Constructs a DeprecateSystemTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeprecateSystemTemplateResponse::DeprecateSystemTemplateResponse(
        const DeprecateSystemTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DeprecateSystemTemplateResponsePrivate(this), parent)
{
    setRequest(new DeprecateSystemTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeprecateSystemTemplateRequest * DeprecateSystemTemplateResponse::request() const
{
    Q_D(const DeprecateSystemTemplateResponse);
    return static_cast<const DeprecateSystemTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DeprecateSystemTemplate \a response.
 */
void DeprecateSystemTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeprecateSystemTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DeprecateSystemTemplateResponsePrivate
 * \brief The DeprecateSystemTemplateResponsePrivate class provides private implementation for DeprecateSystemTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeprecateSystemTemplateResponsePrivate object with public implementation \a q.
 */
DeprecateSystemTemplateResponsePrivate::DeprecateSystemTemplateResponsePrivate(
    DeprecateSystemTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DeprecateSystemTemplate response element from \a xml.
 */
void DeprecateSystemTemplateResponsePrivate::parseDeprecateSystemTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateSystemTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
