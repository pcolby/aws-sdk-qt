// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listshardsresponse.h"
#include "listshardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListShardsResponse
 * \brief The ListShardsResponse class provides an interace for Kinesis ListShards responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listShards
 */

/*!
 * Constructs a ListShardsResponse object for \a reply to \a request, with parent \a parent.
 */
ListShardsResponse::ListShardsResponse(
        const ListShardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListShardsResponsePrivate(this), parent)
{
    setRequest(new ListShardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListShardsRequest * ListShardsResponse::request() const
{
    Q_D(const ListShardsResponse);
    return static_cast<const ListShardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis ListShards \a response.
 */
void ListShardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListShardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::ListShardsResponsePrivate
 * \brief The ListShardsResponsePrivate class provides private implementation for ListShardsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListShardsResponsePrivate object with public implementation \a q.
 */
ListShardsResponsePrivate::ListShardsResponsePrivate(
    ListShardsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis ListShards response element from \a xml.
 */
void ListShardsResponsePrivate::parseListShardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListShardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
