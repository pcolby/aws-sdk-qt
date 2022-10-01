// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcrawlersresponse.h"
#include "listcrawlersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCrawlersResponse
 * \brief The ListCrawlersResponse class provides an interace for Glue ListCrawlers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listCrawlers
 */

/*!
 * Constructs a ListCrawlersResponse object for \a reply to \a request, with parent \a parent.
 */
ListCrawlersResponse::ListCrawlersResponse(
        const ListCrawlersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListCrawlersResponsePrivate(this), parent)
{
    setRequest(new ListCrawlersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCrawlersRequest * ListCrawlersResponse::request() const
{
    Q_D(const ListCrawlersResponse);
    return static_cast<const ListCrawlersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListCrawlers \a response.
 */
void ListCrawlersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCrawlersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListCrawlersResponsePrivate
 * \brief The ListCrawlersResponsePrivate class provides private implementation for ListCrawlersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCrawlersResponsePrivate object with public implementation \a q.
 */
ListCrawlersResponsePrivate::ListCrawlersResponsePrivate(
    ListCrawlersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListCrawlers response element from \a xml.
 */
void ListCrawlersResponsePrivate::parseListCrawlersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCrawlersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
