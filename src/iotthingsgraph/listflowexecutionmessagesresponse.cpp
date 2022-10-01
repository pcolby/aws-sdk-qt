// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listflowexecutionmessagesresponse.h"
#include "listflowexecutionmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::ListFlowExecutionMessagesResponse
 * \brief The ListFlowExecutionMessagesResponse class provides an interace for IoTThingsGraph ListFlowExecutionMessages responses.
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
 * \sa IoTThingsGraphClient::listFlowExecutionMessages
 */

/*!
 * Constructs a ListFlowExecutionMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListFlowExecutionMessagesResponse::ListFlowExecutionMessagesResponse(
        const ListFlowExecutionMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new ListFlowExecutionMessagesResponsePrivate(this), parent)
{
    setRequest(new ListFlowExecutionMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFlowExecutionMessagesRequest * ListFlowExecutionMessagesResponse::request() const
{
    Q_D(const ListFlowExecutionMessagesResponse);
    return static_cast<const ListFlowExecutionMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph ListFlowExecutionMessages \a response.
 */
void ListFlowExecutionMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFlowExecutionMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::ListFlowExecutionMessagesResponsePrivate
 * \brief The ListFlowExecutionMessagesResponsePrivate class provides private implementation for ListFlowExecutionMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a ListFlowExecutionMessagesResponsePrivate object with public implementation \a q.
 */
ListFlowExecutionMessagesResponsePrivate::ListFlowExecutionMessagesResponsePrivate(
    ListFlowExecutionMessagesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph ListFlowExecutionMessages response element from \a xml.
 */
void ListFlowExecutionMessagesResponsePrivate::parseListFlowExecutionMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFlowExecutionMessagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
