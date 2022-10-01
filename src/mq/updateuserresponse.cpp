// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserresponse.h"
#include "updateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::UpdateUserResponse
 * \brief The UpdateUserResponse class provides an interace for Mq UpdateUser responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::updateUser
 */

/*!
 * Constructs a UpdateUserResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserResponse::UpdateUserResponse(
        const UpdateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new UpdateUserResponsePrivate(this), parent)
{
    setRequest(new UpdateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserRequest * UpdateUserResponse::request() const
{
    Q_D(const UpdateUserResponse);
    return static_cast<const UpdateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq UpdateUser \a response.
 */
void UpdateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::UpdateUserResponsePrivate
 * \brief The UpdateUserResponsePrivate class provides private implementation for UpdateUserResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a UpdateUserResponsePrivate object with public implementation \a q.
 */
UpdateUserResponsePrivate::UpdateUserResponsePrivate(
    UpdateUserResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq UpdateUser response element from \a xml.
 */
void UpdateUserResponsePrivate::parseUpdateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
