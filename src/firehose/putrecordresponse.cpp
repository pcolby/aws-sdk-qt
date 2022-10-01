// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecordresponse.h"
#include "putrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::PutRecordResponse
 * \brief The PutRecordResponse class provides an interace for Firehose PutRecord responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::putRecord
 */

/*!
 * Constructs a PutRecordResponse object for \a reply to \a request, with parent \a parent.
 */
PutRecordResponse::PutRecordResponse(
        const PutRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new PutRecordResponsePrivate(this), parent)
{
    setRequest(new PutRecordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRecordRequest * PutRecordResponse::request() const
{
    Q_D(const PutRecordResponse);
    return static_cast<const PutRecordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose PutRecord \a response.
 */
void PutRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::PutRecordResponsePrivate
 * \brief The PutRecordResponsePrivate class provides private implementation for PutRecordResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a PutRecordResponsePrivate object with public implementation \a q.
 */
PutRecordResponsePrivate::PutRecordResponsePrivate(
    PutRecordResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose PutRecord response element from \a xml.
 */
void PutRecordResponsePrivate::parsePutRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
