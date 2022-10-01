// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbrokerresponse.h"
#include "createbrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateBrokerResponse
 * \brief The CreateBrokerResponse class provides an interace for Mq CreateBroker responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createBroker
 */

/*!
 * Constructs a CreateBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBrokerResponse::CreateBrokerResponse(
        const CreateBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new CreateBrokerResponsePrivate(this), parent)
{
    setRequest(new CreateBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBrokerRequest * CreateBrokerResponse::request() const
{
    Q_D(const CreateBrokerResponse);
    return static_cast<const CreateBrokerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq CreateBroker \a response.
 */
void CreateBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::CreateBrokerResponsePrivate
 * \brief The CreateBrokerResponsePrivate class provides private implementation for CreateBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateBrokerResponsePrivate object with public implementation \a q.
 */
CreateBrokerResponsePrivate::CreateBrokerResponsePrivate(
    CreateBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq CreateBroker response element from \a xml.
 */
void CreateBrokerResponsePrivate::parseCreateBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
