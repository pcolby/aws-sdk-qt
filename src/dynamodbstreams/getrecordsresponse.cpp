// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecordsresponse.h"
#include "getrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::GetRecordsResponse
 * \brief The GetRecordsResponse class provides an interace for DynamoDbStreams GetRecords responses.
 *
 * \inmodule QtAwsDynamoDbStreams
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB Streams provides API actions for accessing streams and processing stream records. To learn more about
 *  application development with Streams, see <a
 *  href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing Table Activity with
 *  DynamoDB Streams</a> in the Amazon DynamoDB Developer
 *
 * \sa DynamoDbStreamsClient::getRecords
 */

/*!
 * Constructs a GetRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecordsResponse::GetRecordsResponse(
        const GetRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbStreamsResponse(new GetRecordsResponsePrivate(this), parent)
{
    setRequest(new GetRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecordsRequest * GetRecordsResponse::request() const
{
    Q_D(const GetRecordsResponse);
    return static_cast<const GetRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDbStreams GetRecords \a response.
 */
void GetRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDbStreams::GetRecordsResponsePrivate
 * \brief The GetRecordsResponsePrivate class provides private implementation for GetRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a GetRecordsResponsePrivate object with public implementation \a q.
 */
GetRecordsResponsePrivate::GetRecordsResponsePrivate(
    GetRecordsResponse * const q) : DynamoDbStreamsResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDbStreams GetRecords response element from \a xml.
 */
void GetRecordsResponsePrivate::parseGetRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDbStreams
} // namespace QtAws
