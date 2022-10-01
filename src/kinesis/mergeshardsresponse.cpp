// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(MergeShardsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
