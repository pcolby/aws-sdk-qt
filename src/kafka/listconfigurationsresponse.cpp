// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsresponse.h"
#include "listconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListConfigurationsResponse
 * \brief The ListConfigurationsResponse class provides an interace for Kafka ListConfigurations responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listConfigurations
 */

/*!
 * Constructs a ListConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationsResponse::ListConfigurationsResponse(
        const ListConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationsRequest * ListConfigurationsResponse::request() const
{
    Q_D(const ListConfigurationsResponse);
    return static_cast<const ListConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka ListConfigurations \a response.
 */
void ListConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListConfigurationsResponsePrivate
 * \brief The ListConfigurationsResponsePrivate class provides private implementation for ListConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListConfigurationsResponsePrivate object with public implementation \a q.
 */
ListConfigurationsResponsePrivate::ListConfigurationsResponsePrivate(
    ListConfigurationsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListConfigurations response element from \a xml.
 */
void ListConfigurationsResponsePrivate::parseListConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
