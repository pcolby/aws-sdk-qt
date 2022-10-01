// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsystemtemplateresponse.h"
#include "getsystemtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateResponse
 * \brief The GetSystemTemplateResponse class provides an interace for IoTThingsGraph GetSystemTemplate responses.
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
 * \sa IoTThingsGraphClient::getSystemTemplate
 */

/*!
 * Constructs a GetSystemTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetSystemTemplateResponse::GetSystemTemplateResponse(
        const GetSystemTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetSystemTemplateResponsePrivate(this), parent)
{
    setRequest(new GetSystemTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSystemTemplateRequest * GetSystemTemplateResponse::request() const
{
    Q_D(const GetSystemTemplateResponse);
    return static_cast<const GetSystemTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetSystemTemplate \a response.
 */
void GetSystemTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSystemTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateResponsePrivate
 * \brief The GetSystemTemplateResponsePrivate class provides private implementation for GetSystemTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetSystemTemplateResponsePrivate object with public implementation \a q.
 */
GetSystemTemplateResponsePrivate::GetSystemTemplateResponsePrivate(
    GetSystemTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetSystemTemplate response element from \a xml.
 */
void GetSystemTemplateResponsePrivate::parseGetSystemTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSystemTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
