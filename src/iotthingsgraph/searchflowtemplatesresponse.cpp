// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchflowtemplatesresponse.h"
#include "searchflowtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowTemplatesResponse
 * \brief The SearchFlowTemplatesResponse class provides an interace for IoTThingsGraph SearchFlowTemplates responses.
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
 * \sa IoTThingsGraphClient::searchFlowTemplates
 */

/*!
 * Constructs a SearchFlowTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchFlowTemplatesResponse::SearchFlowTemplatesResponse(
        const SearchFlowTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new SearchFlowTemplatesResponsePrivate(this), parent)
{
    setRequest(new SearchFlowTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchFlowTemplatesRequest * SearchFlowTemplatesResponse::request() const
{
    Q_D(const SearchFlowTemplatesResponse);
    return static_cast<const SearchFlowTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph SearchFlowTemplates \a response.
 */
void SearchFlowTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchFlowTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowTemplatesResponsePrivate
 * \brief The SearchFlowTemplatesResponsePrivate class provides private implementation for SearchFlowTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchFlowTemplatesResponsePrivate object with public implementation \a q.
 */
SearchFlowTemplatesResponsePrivate::SearchFlowTemplatesResponsePrivate(
    SearchFlowTemplatesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph SearchFlowTemplates response element from \a xml.
 */
void SearchFlowTemplatesResponsePrivate::parseSearchFlowTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFlowTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
