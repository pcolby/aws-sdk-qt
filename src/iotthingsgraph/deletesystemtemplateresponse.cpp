// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesystemtemplateresponse.h"
#include "deletesystemtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeleteSystemTemplateResponse
 * \brief The DeleteSystemTemplateResponse class provides an interace for IoTThingsGraph DeleteSystemTemplate responses.
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
 * \sa IoTThingsGraphClient::deleteSystemTemplate
 */

/*!
 * Constructs a DeleteSystemTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSystemTemplateResponse::DeleteSystemTemplateResponse(
        const DeleteSystemTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DeleteSystemTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteSystemTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSystemTemplateRequest * DeleteSystemTemplateResponse::request() const
{
    Q_D(const DeleteSystemTemplateResponse);
    return static_cast<const DeleteSystemTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DeleteSystemTemplate \a response.
 */
void DeleteSystemTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSystemTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DeleteSystemTemplateResponsePrivate
 * \brief The DeleteSystemTemplateResponsePrivate class provides private implementation for DeleteSystemTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeleteSystemTemplateResponsePrivate object with public implementation \a q.
 */
DeleteSystemTemplateResponsePrivate::DeleteSystemTemplateResponsePrivate(
    DeleteSystemTemplateResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DeleteSystemTemplate response element from \a xml.
 */
void DeleteSystemTemplateResponsePrivate::parseDeleteSystemTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSystemTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
