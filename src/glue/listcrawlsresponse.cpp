// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcrawlsresponse.h"
#include "listcrawlsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCrawlsResponse
 * \brief The ListCrawlsResponse class provides an interace for Glue ListCrawls responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listCrawls
 */

/*!
 * Constructs a ListCrawlsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCrawlsResponse::ListCrawlsResponse(
        const ListCrawlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListCrawlsResponsePrivate(this), parent)
{
    setRequest(new ListCrawlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCrawlsRequest * ListCrawlsResponse::request() const
{
    Q_D(const ListCrawlsResponse);
    return static_cast<const ListCrawlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListCrawls \a response.
 */
void ListCrawlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCrawlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListCrawlsResponsePrivate
 * \brief The ListCrawlsResponsePrivate class provides private implementation for ListCrawlsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCrawlsResponsePrivate object with public implementation \a q.
 */
ListCrawlsResponsePrivate::ListCrawlsResponsePrivate(
    ListCrawlsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListCrawls response element from \a xml.
 */
void ListCrawlsResponsePrivate::parseListCrawlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCrawlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
