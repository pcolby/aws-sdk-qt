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

#include "batchgetcrawlersresponse.h"
#include "batchgetcrawlersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetCrawlersResponse
 * \brief The BatchGetCrawlersResponse class provides an interace for Glue BatchGetCrawlers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetCrawlers
 */

/*!
 * Constructs a BatchGetCrawlersResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetCrawlersResponse::BatchGetCrawlersResponse(
        const BatchGetCrawlersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetCrawlersResponsePrivate(this), parent)
{
    setRequest(new BatchGetCrawlersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetCrawlersRequest * BatchGetCrawlersResponse::request() const
{
    Q_D(const BatchGetCrawlersResponse);
    return static_cast<const BatchGetCrawlersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetCrawlers \a response.
 */
void BatchGetCrawlersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetCrawlersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetCrawlersResponsePrivate
 * \brief The BatchGetCrawlersResponsePrivate class provides private implementation for BatchGetCrawlersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetCrawlersResponsePrivate object with public implementation \a q.
 */
BatchGetCrawlersResponsePrivate::BatchGetCrawlersResponsePrivate(
    BatchGetCrawlersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetCrawlers response element from \a xml.
 */
void BatchGetCrawlersResponsePrivate::parseBatchGetCrawlersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetCrawlersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
