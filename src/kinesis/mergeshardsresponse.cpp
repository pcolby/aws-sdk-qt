/*
    Copyright 2013-2018 Paul Colby

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

#include "mergeshardsresponse.h"
#include "mergeshardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::MergeShardsResponse
 * \brief The MergeShardsResponse class provides an interace for Kinesis MergeShards responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::mergeShards
 */

/*!
 * Constructs a MergeShardsResponse object for \a reply to \a request, with parent \a parent.
 */
MergeShardsResponse::MergeShardsResponse(
        const MergeShardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new MergeShardsResponsePrivate(this), parent)
{
    setRequest(new MergeShardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MergeShardsRequest * MergeShardsResponse::request() const
{
    Q_D(const MergeShardsResponse);
    return static_cast<const MergeShardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis MergeShards \a response.
 */
void MergeShardsResponse::parseSuccess(QIODevice &response)
{
    Q_D(MergeShardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::MergeShardsResponsePrivate
 * \brief The MergeShardsResponsePrivate class provides private implementation for MergeShardsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a MergeShardsResponsePrivate object with public implementation \a q.
 */
MergeShardsResponsePrivate::MergeShardsResponsePrivate(
    MergeShardsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis MergeShards response element from \a xml.
 */
void MergeShardsResponsePrivate::parseMergeShardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MergeShardsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
