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
