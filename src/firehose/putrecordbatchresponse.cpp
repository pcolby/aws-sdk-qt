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

#include "putrecordbatchresponse.h"
#include "putrecordbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::PutRecordBatchResponse
 * \brief The PutRecordBatchResponse class provides an interace for Firehose PutRecordBatch responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::putRecordBatch
 */

/*!
 * Constructs a PutRecordBatchResponse object for \a reply to \a request, with parent \a parent.
 */
PutRecordBatchResponse::PutRecordBatchResponse(
        const PutRecordBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new PutRecordBatchResponsePrivate(this), parent)
{
    setRequest(new PutRecordBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRecordBatchRequest * PutRecordBatchResponse::request() const
{
    return static_cast<const PutRecordBatchRequest *>(FirehoseResponse::request());
}

/*!
 * \reimp
 * Parses a successful Firehose PutRecordBatch \a response.
 */
void PutRecordBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRecordBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::PutRecordBatchResponsePrivate
 * \brief The PutRecordBatchResponsePrivate class provides private implementation for PutRecordBatchResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a PutRecordBatchResponsePrivate object with public implementation \a q.
 */
PutRecordBatchResponsePrivate::PutRecordBatchResponsePrivate(
    PutRecordBatchResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose PutRecordBatch response element from \a xml.
 */
void PutRecordBatchResponsePrivate::parsePutRecordBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
