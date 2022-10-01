// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsystemtemplateresponse.h"
#include "createsystemtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::CreateSystemTemplateResponse
 * \brief The CreateSystemTemplateResponse class provides an interace for IoTThingsGraph CreateSystemTemplate responses.
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
 * \sa IoTThingsGraphClient::createSystemTemplate
 */

/*!
 * Constructs a CreateSystemTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSystemTemplateResponse::CreateSystemTemplateResponse(
        const CreateSystemTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new CreateSystemTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateSystemTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSystemTemplateRequest * CreateSystemTemplateResponse::request() const
{
    Q_D(const CreateSystemTemplateResponse);
    return static_cast<const CreateSystemTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph CreateSystemTemplate \a response.
 */
void CreateSystemTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSystemTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::CreateSystemTemplateResponsePrivate
 * \brief The CreateSystemTemplateResponsePrivate class provides private implementation for CreateSystemTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a CreateSystemTemplateResponsePrivate object with public implementation \a q.
 */
CreateSystemTemplateResponsePrivate::CreateSystemTemplateResponsePrivate(
    CreateSystemTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph CreateSystemTemplate response element from \a xml.
 */
void CreateSystemTemplateResponsePrivate::parseCreateSystemTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSystemTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
