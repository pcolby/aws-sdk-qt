// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenamespaceresponse.h"
#include "describenamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DescribeNamespaceResponse
 * \brief The DescribeNamespaceResponse class provides an interace for IoTThingsGraph DescribeNamespace responses.
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
 * \sa IoTThingsGraphClient::describeNamespace
 */

/*!
 * Constructs a DescribeNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNamespaceResponse::DescribeNamespaceResponse(
        const DescribeNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DescribeNamespaceResponsePrivate(this), parent)
{
    setRequest(new DescribeNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNamespaceRequest * DescribeNamespaceResponse::request() const
{
    Q_D(const DescribeNamespaceResponse);
    return static_cast<const DescribeNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DescribeNamespace \a response.
 */
void DescribeNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DescribeNamespaceResponsePrivate
 * \brief The DescribeNamespaceResponsePrivate class provides private implementation for DescribeNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DescribeNamespaceResponsePrivate object with public implementation \a q.
 */
DescribeNamespaceResponsePrivate::DescribeNamespaceResponsePrivate(
    DescribeNamespaceResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DescribeNamespace response element from \a xml.
 */
void DescribeNamespaceResponsePrivate::parseDescribeNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
