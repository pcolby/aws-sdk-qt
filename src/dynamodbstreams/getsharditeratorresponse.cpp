// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsharditeratorresponse.h"
#include "getsharditeratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::GetShardIteratorResponse
 * \brief The GetShardIteratorResponse class provides an interace for DynamoDbStreams GetShardIterator responses.
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
 * \sa DynamoDbStreamsClient::getShardIterator
 */

/*!
 * Constructs a GetShardIteratorResponse object for \a reply to \a request, with parent \a parent.
 */
GetShardIteratorResponse::GetShardIteratorResponse(
        const GetShardIteratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbStreamsResponse(new GetShardIteratorResponsePrivate(this), parent)
{
    setRequest(new GetShardIteratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetShardIteratorRequest * GetShardIteratorResponse::request() const
{
    Q_D(const GetShardIteratorResponse);
    return static_cast<const GetShardIteratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDbStreams GetShardIterator \a response.
 */
void GetShardIteratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetShardIteratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDbStreams::GetShardIteratorResponsePrivate
 * \brief The GetShardIteratorResponsePrivate class provides private implementation for GetShardIteratorResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a GetShardIteratorResponsePrivate object with public implementation \a q.
 */
GetShardIteratorResponsePrivate::GetShardIteratorResponsePrivate(
    GetShardIteratorResponse * const q) : DynamoDbStreamsResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDbStreams GetShardIterator response element from \a xml.
 */
void GetShardIteratorResponsePrivate::parseGetShardIteratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetShardIteratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDbStreams
} // namespace QtAws
