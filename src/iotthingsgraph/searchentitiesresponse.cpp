// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchentitiesresponse.h"
#include "searchentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchEntitiesResponse
 * \brief The SearchEntitiesResponse class provides an interace for IoTThingsGraph SearchEntities responses.
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
 * \sa IoTThingsGraphClient::searchEntities
 */

/*!
 * Constructs a SearchEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchEntitiesResponse::SearchEntitiesResponse(
        const SearchEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new SearchEntitiesResponsePrivate(this), parent)
{
    setRequest(new SearchEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchEntitiesRequest * SearchEntitiesResponse::request() const
{
    Q_D(const SearchEntitiesResponse);
    return static_cast<const SearchEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph SearchEntities \a response.
 */
void SearchEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::SearchEntitiesResponsePrivate
 * \brief The SearchEntitiesResponsePrivate class provides private implementation for SearchEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchEntitiesResponsePrivate object with public implementation \a q.
 */
SearchEntitiesResponsePrivate::SearchEntitiesResponsePrivate(
    SearchEntitiesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph SearchEntities response element from \a xml.
 */
void SearchEntitiesResponsePrivate::parseSearchEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
