// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebrokerresponse.h"
#include "updatebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::UpdateBrokerResponse
 * \brief The UpdateBrokerResponse class provides an interace for Mq UpdateBroker responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::updateBroker
 */

/*!
 * Constructs a UpdateBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBrokerResponse::UpdateBrokerResponse(
        const UpdateBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new UpdateBrokerResponsePrivate(this), parent)
{
    setRequest(new UpdateBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBrokerRequest * UpdateBrokerResponse::request() const
{
    Q_D(const UpdateBrokerResponse);
    return static_cast<const UpdateBrokerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq UpdateBroker \a response.
 */
void UpdateBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::UpdateBrokerResponsePrivate
 * \brief The UpdateBrokerResponsePrivate class provides private implementation for UpdateBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a UpdateBrokerResponsePrivate object with public implementation \a q.
 */
UpdateBrokerResponsePrivate::UpdateBrokerResponsePrivate(
    UpdateBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq UpdateBroker response element from \a xml.
 */
void UpdateBrokerResponsePrivate::parseUpdateBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
