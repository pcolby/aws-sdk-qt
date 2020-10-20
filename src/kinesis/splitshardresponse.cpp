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
