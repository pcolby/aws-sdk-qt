// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadentitydefinitionsresponse.h"
#include "uploadentitydefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UploadEntityDefinitionsResponse
 * \brief The UploadEntityDefinitionsResponse class provides an interace for IoTThingsGraph UploadEntityDefinitions responses.
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
 * \sa IoTThingsGraphClient::uploadEntityDefinitions
 */

/*!
 * Constructs a UploadEntityDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
UploadEntityDefinitionsResponse::UploadEntityDefinitionsResponse(
        const UploadEntityDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new UploadEntityDefinitionsResponsePrivate(this), parent)
{
    setRequest(new UploadEntityDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadEntityDefinitionsRequest * UploadEntityDefinitionsResponse::request() const
{
    Q_D(const UploadEntityDefinitionsResponse);
    return static_cast<const UploadEntityDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph UploadEntityDefinitions \a response.
 */
void UploadEntityDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadEntityDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::UploadEntityDefinitionsResponsePrivate
 * \brief The UploadEntityDefinitionsResponsePrivate class provides private implementation for UploadEntityDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UploadEntityDefinitionsResponsePrivate object with public implementation \a q.
 */
UploadEntityDefinitionsResponsePrivate::UploadEntityDefinitionsResponsePrivate(
    UploadEntityDefinitionsResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph UploadEntityDefinitions response element from \a xml.
 */
void UploadEntityDefinitionsResponsePrivate::parseUploadEntityDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadEntityDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
