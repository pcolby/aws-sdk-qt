// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listkafkaversionsresponse.h"
#include "listkafkaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListKafkaVersionsResponse
 * \brief The ListKafkaVersionsResponse class provides an interace for Kafka ListKafkaVersions responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listKafkaVersions
 */

/*!
 * Constructs a ListKafkaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListKafkaVersionsResponse::ListKafkaVersionsResponse(
        const ListKafkaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListKafkaVersionsResponsePrivate(this), parent)
{
    setRequest(new ListKafkaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListKafkaVersionsRequest * ListKafkaVersionsResponse::request() const
{
    Q_D(const ListKafkaVersionsResponse);
    return static_cast<const ListKafkaVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka ListKafkaVersions \a response.
 */
void ListKafkaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListKafkaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListKafkaVersionsResponsePrivate
 * \brief The ListKafkaVersionsResponsePrivate class provides private implementation for ListKafkaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListKafkaVersionsResponsePrivate object with public implementation \a q.
 */
ListKafkaVersionsResponsePrivate::ListKafkaVersionsResponsePrivate(
    ListKafkaVersionsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListKafkaVersions response element from \a xml.
 */
void ListKafkaVersionsResponsePrivate::parseListKafkaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKafkaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
