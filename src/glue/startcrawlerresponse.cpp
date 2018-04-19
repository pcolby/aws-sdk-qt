/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startcrawlerresponse.h"
#include "startcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartCrawlerResponse
 * \brief The StartCrawlerResponse class provides an interace for Glue StartCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startCrawler
 */

/*!
 * Constructs a StartCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
StartCrawlerResponse::StartCrawlerResponse(
        const StartCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartCrawlerResponsePrivate(this), parent)
{
    setRequest(new StartCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCrawlerRequest * StartCrawlerResponse::request() const
{
    Q_D(const StartCrawlerResponse);
    return static_cast<const StartCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartCrawler \a response.
 */
void StartCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartCrawlerResponsePrivate
 * \brief The StartCrawlerResponsePrivate class provides private implementation for StartCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartCrawlerResponsePrivate object with public implementation \a q.
 */
StartCrawlerResponsePrivate::StartCrawlerResponsePrivate(
    StartCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartCrawler response element from \a xml.
 */
void StartCrawlerResponsePrivate::parseStartCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
