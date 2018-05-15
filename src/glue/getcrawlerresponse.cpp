/*
    Copyright 2013-2018 Paul Colby

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

#include "getcrawlerresponse.h"
#include "getcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlerResponse
 * \brief The GetCrawlerResponse class provides an interace for Glue GetCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCrawler
 */

/*!
 * Constructs a GetCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
GetCrawlerResponse::GetCrawlerResponse(
        const GetCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlerResponsePrivate(this), parent)
{
    setRequest(new GetCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCrawlerRequest * GetCrawlerResponse::request() const
{
    Q_D(const GetCrawlerResponse);
    return static_cast<const GetCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetCrawler \a response.
 */
void GetCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCrawlerResponsePrivate
 * \brief The GetCrawlerResponsePrivate class provides private implementation for GetCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlerResponsePrivate object with public implementation \a q.
 */
GetCrawlerResponsePrivate::GetCrawlerResponsePrivate(
    GetCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCrawler response element from \a xml.
 */
void GetCrawlerResponsePrivate::parseGetCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
