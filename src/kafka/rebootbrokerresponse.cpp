// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootbrokerresponse.h"
#include "rebootbrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::RebootBrokerResponse
 * \brief The RebootBrokerResponse class provides an interace for Kafka RebootBroker responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::rebootBroker
 */

/*!
 * Constructs a RebootBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
RebootBrokerResponse::RebootBrokerResponse(
        const RebootBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new RebootBrokerResponsePrivate(this), parent)
{
    setRequest(new RebootBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootBrokerRequest * RebootBrokerResponse::request() const
{
    Q_D(const RebootBrokerResponse);
    return static_cast<const RebootBrokerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka RebootBroker \a response.
 */
void RebootBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::RebootBrokerResponsePrivate
 * \brief The RebootBrokerResponsePrivate class provides private implementation for RebootBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a RebootBrokerResponsePrivate object with public implementation \a q.
 */
RebootBrokerResponsePrivate::RebootBrokerResponsePrivate(
    RebootBrokerResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka RebootBroker response element from \a xml.
 */
void RebootBrokerResponsePrivate::parseRebootBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
