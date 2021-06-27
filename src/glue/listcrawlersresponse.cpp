/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    return static_cast<const ListCrawlersRequest *>(GlueResponse::request());
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
