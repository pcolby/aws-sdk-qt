// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchthingsresponse.h"
#include "searchthingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchThingsResponse
 * \brief The SearchThingsResponse class provides an interace for IoTThingsGraph SearchThings responses.
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
 * \sa IoTThingsGraphClient::searchThings
 */

/*!
 * Constructs a SearchThingsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchThingsResponse::SearchThingsResponse(
        const SearchThingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new SearchThingsResponsePrivate(this), parent)
{
    setRequest(new SearchThingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchThingsRequest * SearchThingsResponse::request() const
{
    Q_D(const SearchThingsResponse);
    return static_cast<const SearchThingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph SearchThings \a response.
 */
void SearchThingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchThingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::SearchThingsResponsePrivate
 * \brief The SearchThingsResponsePrivate class provides private implementation for SearchThingsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchThingsResponsePrivate object with public implementation \a q.
 */
SearchThingsResponsePrivate::SearchThingsResponsePrivate(
    SearchThingsResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph SearchThings response element from \a xml.
 */
void SearchThingsResponsePrivate::parseSearchThingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchThingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
