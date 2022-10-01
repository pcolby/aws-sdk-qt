// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbrokersresponse.h"
#include "listbrokersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListBrokersResponse
 * \brief The ListBrokersResponse class provides an interace for Mq ListBrokers responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listBrokers
 */

/*!
 * Constructs a ListBrokersResponse object for \a reply to \a request, with parent \a parent.
 */
ListBrokersResponse::ListBrokersResponse(
        const ListBrokersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new ListBrokersResponsePrivate(this), parent)
{
    setRequest(new ListBrokersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBrokersRequest * ListBrokersResponse::request() const
{
    Q_D(const ListBrokersResponse);
    return static_cast<const ListBrokersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq ListBrokers \a response.
 */
void ListBrokersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBrokersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::ListBrokersResponsePrivate
 * \brief The ListBrokersResponsePrivate class provides private implementation for ListBrokersResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListBrokersResponsePrivate object with public implementation \a q.
 */
ListBrokersResponsePrivate::ListBrokersResponsePrivate(
    ListBrokersResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq ListBrokers response element from \a xml.
 */
void ListBrokersResponsePrivate::parseListBrokersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBrokersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
