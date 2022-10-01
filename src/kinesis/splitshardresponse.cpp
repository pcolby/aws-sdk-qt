// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "splitshardresponse.h"
#include "splitshardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::SplitShardResponse
 * \brief The SplitShardResponse class provides an interace for Kinesis SplitShard responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::splitShard
 */

/*!
 * Constructs a SplitShardResponse object for \a reply to \a request, with parent \a parent.
 */
SplitShardResponse::SplitShardResponse(
        const SplitShardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new SplitShardResponsePrivate(this), parent)
{
    setRequest(new SplitShardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SplitShardRequest * SplitShardResponse::request() const
{
    Q_D(const SplitShardResponse);
    return static_cast<const SplitShardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis SplitShard \a response.
 */
void SplitShardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SplitShardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::SplitShardResponsePrivate
 * \brief The SplitShardResponsePrivate class provides private implementation for SplitShardResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a SplitShardResponsePrivate object with public implementation \a q.
 */
SplitShardResponsePrivate::SplitShardResponsePrivate(
    SplitShardResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis SplitShard response element from \a xml.
 */
void SplitShardResponsePrivate::parseSplitShardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SplitShardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
