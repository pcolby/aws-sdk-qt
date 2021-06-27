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

#include "listscramsecretsresponse.h"
#include "listscramsecretsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListScramSecretsResponse
 * \brief The ListScramSecretsResponse class provides an interace for Kafka ListScramSecrets responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listScramSecrets
 */

/*!
 * Constructs a ListScramSecretsResponse object for \a reply to \a request, with parent \a parent.
 */
ListScramSecretsResponse::ListScramSecretsResponse(
        const ListScramSecretsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListScramSecretsResponsePrivate(this), parent)
{
    setRequest(new ListScramSecretsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListScramSecretsRequest * ListScramSecretsResponse::request() const
{
    return static_cast<const ListScramSecretsRequest *>(KafkaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kafka ListScramSecrets \a response.
 */
void ListScramSecretsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListScramSecretsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListScramSecretsResponsePrivate
 * \brief The ListScramSecretsResponsePrivate class provides private implementation for ListScramSecretsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListScramSecretsResponsePrivate object with public implementation \a q.
 */
ListScramSecretsResponsePrivate::ListScramSecretsResponsePrivate(
    ListScramSecretsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListScramSecrets response element from \a xml.
 */
void ListScramSecretsResponsePrivate::parseListScramSecretsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListScramSecretsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
