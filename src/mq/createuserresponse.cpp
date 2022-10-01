// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserresponse.h"
#include "createuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateUserResponse
 * \brief The CreateUserResponse class provides an interace for Mq CreateUser responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createUser
 */

/*!
 * Constructs a CreateUserResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserResponse::CreateUserResponse(
        const CreateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new CreateUserResponsePrivate(this), parent)
{
    setRequest(new CreateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserRequest * CreateUserResponse::request() const
{
    Q_D(const CreateUserResponse);
    return static_cast<const CreateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq CreateUser \a response.
 */
void CreateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::CreateUserResponsePrivate
 * \brief The CreateUserResponsePrivate class provides private implementation for CreateUserResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateUserResponsePrivate object with public implementation \a q.
 */
CreateUserResponsePrivate::CreateUserResponsePrivate(
    CreateUserResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq CreateUser response element from \a xml.
 */
void CreateUserResponsePrivate::parseCreateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
