/*
    Copyright 2013-2021 Paul Colby

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
