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

#include "stopcrawlerresponse.h"
#include "stopcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerResponse
 * \brief The StopCrawlerResponse class provides an interace for Glue StopCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::stopCrawler
 */

/*!
 * Constructs a StopCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
StopCrawlerResponse::StopCrawlerResponse(
        const StopCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopCrawlerResponsePrivate(this), parent)
{
    setRequest(new StopCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCrawlerRequest * StopCrawlerResponse::request() const
{
    Q_D(const StopCrawlerResponse);
    return static_cast<const StopCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopCrawler \a response.
 */
void StopCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopCrawlerResponsePrivate
 * \brief The StopCrawlerResponsePrivate class provides private implementation for StopCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopCrawlerResponsePrivate object with public implementation \a q.
 */
StopCrawlerResponsePrivate::StopCrawlerResponsePrivate(
    StopCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopCrawler response element from \a xml.
 */
void StopCrawlerResponsePrivate::parseStopCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCrawlerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
