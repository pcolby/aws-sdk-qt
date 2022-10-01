// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
