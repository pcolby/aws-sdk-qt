// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsresponse.h"
#include "listconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListConfigurationsResponse
 * \brief The ListConfigurationsResponse class provides an interace for Mq ListConfigurations responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listConfigurations
 */

/*!
 * Constructs a ListConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationsResponse::ListConfigurationsResponse(
        const ListConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new ListConfigurationsResponsePrivate(this), parent)
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
 * Parses a successful Mq ListConfigurations \a response.
 */
void ListConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::ListConfigurationsResponsePrivate
 * \brief The ListConfigurationsResponsePrivate class provides private implementation for ListConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListConfigurationsResponsePrivate object with public implementation \a q.
 */
ListConfigurationsResponsePrivate::ListConfigurationsResponsePrivate(
    ListConfigurationsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq ListConfigurations response element from \a xml.
 */
void ListConfigurationsResponsePrivate::parseListConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
