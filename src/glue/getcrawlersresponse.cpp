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

#include "getcrawlersresponse.h"
#include "getcrawlersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlersResponse
 * \brief The GetCrawlersResponse class provides an interace for Glue GetCrawlers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCrawlers
 */

/*!
 * Constructs a GetCrawlersResponse object for \a reply to \a request, with parent \a parent.
 */
GetCrawlersResponse::GetCrawlersResponse(
        const GetCrawlersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlersResponsePrivate(this), parent)
{
    setRequest(new GetCrawlersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCrawlersRequest * GetCrawlersResponse::request() const
{
    Q_D(const GetCrawlersResponse);
    return static_cast<const GetCrawlersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetCrawlers \a response.
 */
void GetCrawlersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCrawlersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCrawlersResponsePrivate
 * \brief The GetCrawlersResponsePrivate class provides private implementation for GetCrawlersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlersResponsePrivate object with public implementation \a q.
 */
GetCrawlersResponsePrivate::GetCrawlersResponsePrivate(
    GetCrawlersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCrawlers response element from \a xml.
 */
void GetCrawlersResponsePrivate::parseGetCrawlersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
