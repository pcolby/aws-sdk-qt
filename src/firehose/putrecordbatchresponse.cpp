// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const PutRecordBatchResponse);
    return static_cast<const PutRecordBatchRequest *>(d->request);
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
