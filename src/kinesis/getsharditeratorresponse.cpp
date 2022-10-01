// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsharditeratorresponse.h"
#include "getsharditeratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::GetShardIteratorResponse
 * \brief The GetShardIteratorResponse class provides an interace for Kinesis GetShardIterator responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::getShardIterator
 */

/*!
 * Constructs a GetShardIteratorResponse object for \a reply to \a request, with parent \a parent.
 */
GetShardIteratorResponse::GetShardIteratorResponse(
        const GetShardIteratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new GetShardIteratorResponsePrivate(this), parent)
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
 * Parses a successful Kinesis GetShardIterator \a response.
 */
void GetShardIteratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetShardIteratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::GetShardIteratorResponsePrivate
 * \brief The GetShardIteratorResponsePrivate class provides private implementation for GetShardIteratorResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a GetShardIteratorResponsePrivate object with public implementation \a q.
 */
GetShardIteratorResponsePrivate::GetShardIteratorResponsePrivate(
    GetShardIteratorResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis GetShardIterator response element from \a xml.
 */
void GetShardIteratorResponsePrivate::parseGetShardIteratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetShardIteratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
