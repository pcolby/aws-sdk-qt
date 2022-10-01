// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationrevisionsresponse.h"
#include "listconfigurationrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListConfigurationRevisionsResponse
 * \brief The ListConfigurationRevisionsResponse class provides an interace for Kafka ListConfigurationRevisions responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listConfigurationRevisions
 */

/*!
 * Constructs a ListConfigurationRevisionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationRevisionsResponse::ListConfigurationRevisionsResponse(
        const ListConfigurationRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListConfigurationRevisionsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationRevisionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationRevisionsRequest * ListConfigurationRevisionsResponse::request() const
{
    Q_D(const ListConfigurationRevisionsResponse);
    return static_cast<const ListConfigurationRevisionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka ListConfigurationRevisions \a response.
 */
void ListConfigurationRevisionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListConfigurationRevisionsResponsePrivate
 * \brief The ListConfigurationRevisionsResponsePrivate class provides private implementation for ListConfigurationRevisionsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListConfigurationRevisionsResponsePrivate object with public implementation \a q.
 */
ListConfigurationRevisionsResponsePrivate::ListConfigurationRevisionsResponsePrivate(
    ListConfigurationRevisionsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListConfigurationRevisions response element from \a xml.
 */
void ListConfigurationRevisionsResponsePrivate::parseListConfigurationRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationRevisionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
