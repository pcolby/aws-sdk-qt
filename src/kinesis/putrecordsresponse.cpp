// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecordsresponse.h"
#include "putrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::PutRecordsResponse
 * \brief The PutRecordsResponse class provides an interace for Kinesis PutRecords responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::putRecords
 */

/*!
 * Constructs a PutRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
PutRecordsResponse::PutRecordsResponse(
        const PutRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new PutRecordsResponsePrivate(this), parent)
{
    setRequest(new PutRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRecordsRequest * PutRecordsResponse::request() const
{
    Q_D(const PutRecordsResponse);
    return static_cast<const PutRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis PutRecords \a response.
 */
void PutRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::PutRecordsResponsePrivate
 * \brief The PutRecordsResponsePrivate class provides private implementation for PutRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a PutRecordsResponsePrivate object with public implementation \a q.
 */
PutRecordsResponsePrivate::PutRecordsResponsePrivate(
    PutRecordsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis PutRecords response element from \a xml.
 */
void PutRecordsResponsePrivate::parsePutRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
