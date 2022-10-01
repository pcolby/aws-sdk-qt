// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompatiblekafkaversionsresponse.h"
#include "getcompatiblekafkaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::GetCompatibleKafkaVersionsResponse
 * \brief The GetCompatibleKafkaVersionsResponse class provides an interace for Kafka GetCompatibleKafkaVersions responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::getCompatibleKafkaVersions
 */

/*!
 * Constructs a GetCompatibleKafkaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCompatibleKafkaVersionsResponse::GetCompatibleKafkaVersionsResponse(
        const GetCompatibleKafkaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new GetCompatibleKafkaVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCompatibleKafkaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCompatibleKafkaVersionsRequest * GetCompatibleKafkaVersionsResponse::request() const
{
    Q_D(const GetCompatibleKafkaVersionsResponse);
    return static_cast<const GetCompatibleKafkaVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka GetCompatibleKafkaVersions \a response.
 */
void GetCompatibleKafkaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCompatibleKafkaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::GetCompatibleKafkaVersionsResponsePrivate
 * \brief The GetCompatibleKafkaVersionsResponsePrivate class provides private implementation for GetCompatibleKafkaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a GetCompatibleKafkaVersionsResponsePrivate object with public implementation \a q.
 */
GetCompatibleKafkaVersionsResponsePrivate::GetCompatibleKafkaVersionsResponsePrivate(
    GetCompatibleKafkaVersionsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka GetCompatibleKafkaVersions response element from \a xml.
 */
void GetCompatibleKafkaVersionsResponsePrivate::parseGetCompatibleKafkaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCompatibleKafkaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
