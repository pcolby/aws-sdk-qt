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

#include "updatecrawlerresponse.h"
#include "updatecrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateCrawlerResponse
 * \brief The UpdateCrawlerResponse class provides an interace for Glue UpdateCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateCrawler
 */

/*!
 * Constructs a UpdateCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCrawlerResponse::UpdateCrawlerResponse(
        const UpdateCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateCrawlerResponsePrivate(this), parent)
{
    setRequest(new UpdateCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCrawlerRequest * UpdateCrawlerResponse::request() const
{
    Q_D(const UpdateCrawlerResponse);
    return static_cast<const UpdateCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateCrawler \a response.
 */
void UpdateCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateCrawlerResponsePrivate
 * \brief The UpdateCrawlerResponsePrivate class provides private implementation for UpdateCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateCrawlerResponsePrivate object with public implementation \a q.
 */
UpdateCrawlerResponsePrivate::UpdateCrawlerResponsePrivate(
    UpdateCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateCrawler response element from \a xml.
 */
void UpdateCrawlerResponsePrivate::parseUpdateCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCrawlerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
