// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListScramSecretsResponse);
    return static_cast<const ListScramSecretsRequest *>(d->request);
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
