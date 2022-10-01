// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
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
