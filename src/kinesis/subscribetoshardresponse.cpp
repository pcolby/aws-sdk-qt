// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
