// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchflowexecutionsresponse.h"
#include "searchflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowExecutionsResponse
 * \brief The SearchFlowExecutionsResponse class provides an interace for IoTThingsGraph SearchFlowExecutions responses.
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
 * \sa IoTThingsGraphClient::searchFlowExecutions
 */

/*!
 * Constructs a SearchFlowExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchFlowExecutionsResponse::SearchFlowExecutionsResponse(
        const SearchFlowExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new SearchFlowExecutionsResponsePrivate(this), parent)
{
    setRequest(new SearchFlowExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchFlowExecutionsRequest * SearchFlowExecutionsResponse::request() const
{
    Q_D(const SearchFlowExecutionsResponse);
    return static_cast<const SearchFlowExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph SearchFlowExecutions \a response.
 */
void SearchFlowExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchFlowExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowExecutionsResponsePrivate
 * \brief The SearchFlowExecutionsResponsePrivate class provides private implementation for SearchFlowExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchFlowExecutionsResponsePrivate object with public implementation \a q.
 */
SearchFlowExecutionsResponsePrivate::SearchFlowExecutionsResponsePrivate(
    SearchFlowExecutionsResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph SearchFlowExecutions response element from \a xml.
 */
void SearchFlowExecutionsResponsePrivate::parseSearchFlowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFlowExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
