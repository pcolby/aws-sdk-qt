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

#include "batchgetnamedqueryresponse.h"
#include "batchgetnamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::BatchGetNamedQueryResponse
 * \brief The BatchGetNamedQueryResponse class provides an interace for Athena BatchGetNamedQuery responses.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::batchGetNamedQuery
 */

/*!
 * Constructs a BatchGetNamedQueryResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetNamedQueryResponse::BatchGetNamedQueryResponse(
        const BatchGetNamedQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new BatchGetNamedQueryResponsePrivate(this), parent)
{
    setRequest(new BatchGetNamedQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetNamedQueryRequest * BatchGetNamedQueryResponse::request() const
{
    Q_D(const BatchGetNamedQueryResponse);
    return static_cast<const BatchGetNamedQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Athena BatchGetNamedQuery \a response.
 */
void BatchGetNamedQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetNamedQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Athena::BatchGetNamedQueryResponsePrivate
 * \brief The BatchGetNamedQueryResponsePrivate class provides private implementation for BatchGetNamedQueryResponse.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a BatchGetNamedQueryResponsePrivate object with public implementation \a q.
 */
BatchGetNamedQueryResponsePrivate::BatchGetNamedQueryResponsePrivate(
    BatchGetNamedQueryResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * Parses a Athena BatchGetNamedQuery response element from \a xml.
 */
void BatchGetNamedQueryResponsePrivate::parseBatchGetNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetNamedQueryResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
