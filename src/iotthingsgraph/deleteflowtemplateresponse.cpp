// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteflowtemplateresponse.h"
#include "deleteflowtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeleteFlowTemplateResponse
 * \brief The DeleteFlowTemplateResponse class provides an interace for IoTThingsGraph DeleteFlowTemplate responses.
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
 * \sa IoTThingsGraphClient::deleteFlowTemplate
 */

/*!
 * Constructs a DeleteFlowTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFlowTemplateResponse::DeleteFlowTemplateResponse(
        const DeleteFlowTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DeleteFlowTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteFlowTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFlowTemplateRequest * DeleteFlowTemplateResponse::request() const
{
    Q_D(const DeleteFlowTemplateResponse);
    return static_cast<const DeleteFlowTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DeleteFlowTemplate \a response.
 */
void DeleteFlowTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFlowTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DeleteFlowTemplateResponsePrivate
 * \brief The DeleteFlowTemplateResponsePrivate class provides private implementation for DeleteFlowTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeleteFlowTemplateResponsePrivate object with public implementation \a q.
 */
DeleteFlowTemplateResponsePrivate::DeleteFlowTemplateResponsePrivate(
    DeleteFlowTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DeleteFlowTemplate response element from \a xml.
 */
void DeleteFlowTemplateResponsePrivate::parseDeleteFlowTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFlowTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
