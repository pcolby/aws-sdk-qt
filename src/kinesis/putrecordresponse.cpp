// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecordresponse.h"
#include "putrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::PutRecordResponse
 * \brief The PutRecordResponse class provides an interace for Kinesis PutRecord responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::putRecord
 */

/*!
 * Constructs a PutRecordResponse object for \a reply to \a request, with parent \a parent.
 */
PutRecordResponse::PutRecordResponse(
        const PutRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new PutRecordResponsePrivate(this), parent)
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
 * Parses a successful Kinesis PutRecord \a response.
 */
void PutRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::PutRecordResponsePrivate
 * \brief The PutRecordResponsePrivate class provides private implementation for PutRecordResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a PutRecordResponsePrivate object with public implementation \a q.
 */
PutRecordResponsePrivate::PutRecordResponsePrivate(
    PutRecordResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis PutRecord response element from \a xml.
 */
void PutRecordResponsePrivate::parsePutRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
