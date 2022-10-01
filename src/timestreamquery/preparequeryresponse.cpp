// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "preparequeryresponse.h"
#include "preparequeryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::PrepareQueryResponse
 * \brief The PrepareQueryResponse class provides an interace for TimestreamQuery PrepareQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::prepareQuery
 */

/*!
 * Constructs a PrepareQueryResponse object for \a reply to \a request, with parent \a parent.
 */
PrepareQueryResponse::PrepareQueryResponse(
        const PrepareQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new PrepareQueryResponsePrivate(this), parent)
{
    setRequest(new PrepareQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PrepareQueryRequest * PrepareQueryResponse::request() const
{
    Q_D(const PrepareQueryResponse);
    return static_cast<const PrepareQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery PrepareQuery \a response.
 */
void PrepareQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PrepareQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::PrepareQueryResponsePrivate
 * \brief The PrepareQueryResponsePrivate class provides private implementation for PrepareQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a PrepareQueryResponsePrivate object with public implementation \a q.
 */
PrepareQueryResponsePrivate::PrepareQueryResponsePrivate(
    PrepareQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery PrepareQuery response element from \a xml.
 */
void PrepareQueryResponsePrivate::parsePrepareQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PrepareQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
