/*
    Copyright 2013-2019 Paul Colby

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

#include "deletecrawlerresponse.h"
#include "deletecrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteCrawlerResponse
 * \brief The DeleteCrawlerResponse class provides an interace for Glue DeleteCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteCrawler
 */

/*!
 * Constructs a DeleteCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCrawlerResponse::DeleteCrawlerResponse(
        const DeleteCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteCrawlerResponsePrivate(this), parent)
{
    setRequest(new DeleteCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCrawlerRequest * DeleteCrawlerResponse::request() const
{
    Q_D(const DeleteCrawlerResponse);
    return static_cast<const DeleteCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteCrawler \a response.
 */
void DeleteCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteCrawlerResponsePrivate
 * \brief The DeleteCrawlerResponsePrivate class provides private implementation for DeleteCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteCrawlerResponsePrivate object with public implementation \a q.
 */
DeleteCrawlerResponsePrivate::DeleteCrawlerResponsePrivate(
    DeleteCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteCrawler response element from \a xml.
 */
void DeleteCrawlerResponsePrivate::parseDeleteCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCrawlerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
