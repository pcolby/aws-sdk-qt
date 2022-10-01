// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesysteminstanceresponse.h"
#include "deletesysteminstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeleteSystemInstanceResponse
 * \brief The DeleteSystemInstanceResponse class provides an interace for IoTThingsGraph DeleteSystemInstance responses.
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
 * \sa IoTThingsGraphClient::deleteSystemInstance
 */

/*!
 * Constructs a DeleteSystemInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSystemInstanceResponse::DeleteSystemInstanceResponse(
        const DeleteSystemInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DeleteSystemInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteSystemInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSystemInstanceRequest * DeleteSystemInstanceResponse::request() const
{
    Q_D(const DeleteSystemInstanceResponse);
    return static_cast<const DeleteSystemInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DeleteSystemInstance \a response.
 */
void DeleteSystemInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSystemInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DeleteSystemInstanceResponsePrivate
 * \brief The DeleteSystemInstanceResponsePrivate class provides private implementation for DeleteSystemInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeleteSystemInstanceResponsePrivate object with public implementation \a q.
 */
DeleteSystemInstanceResponsePrivate::DeleteSystemInstanceResponsePrivate(
    DeleteSystemInstanceResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DeleteSystemInstance response element from \a xml.
 */
void DeleteSystemInstanceResponsePrivate::parseDeleteSystemInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSystemInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
