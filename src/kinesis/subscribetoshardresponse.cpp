/*
    Copyright 2013-2020 Paul Colby

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

#include "subscribetoshardresponse.h"
#include "subscribetoshardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::SubscribeToShardResponse
 * \brief The SubscribeToShardResponse class provides an interace for Kinesis SubscribeToShard responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::subscribeToShard
 */

/*!
 * Constructs a SubscribeToShardResponse object for \a reply to \a request, with parent \a parent.
 */
SubscribeToShardResponse::SubscribeToShardResponse(
        const SubscribeToShardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new SubscribeToShardResponsePrivate(this), parent)
{
    setRequest(new SubscribeToShardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubscribeToShardRequest * SubscribeToShardResponse::request() const
{
    Q_D(const SubscribeToShardResponse);
    return static_cast<const SubscribeToShardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis SubscribeToShard \a response.
 */
void SubscribeToShardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubscribeToShardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::SubscribeToShardResponsePrivate
 * \brief The SubscribeToShardResponsePrivate class provides private implementation for SubscribeToShardResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a SubscribeToShardResponsePrivate object with public implementation \a q.
 */
SubscribeToShardResponsePrivate::SubscribeToShardResponsePrivate(
    SubscribeToShardResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis SubscribeToShard response element from \a xml.
 */
void SubscribeToShardResponsePrivate::parseSubscribeToShardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeToShardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
