/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateuserresponse.h"
#include "updateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::UpdateUserResponse
 * \brief The UpdateUserResponse class provides an interace for MQ UpdateUser responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
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
 * Parses a successful MQ UpdateUser \a response.
 */
void UpdateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::UpdateUserResponsePrivate
 * \brief The UpdateUserResponsePrivate class provides private implementation for UpdateUserResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a UpdateUserResponsePrivate object with public implementation \a q.
 */
UpdateUserResponsePrivate::UpdateUserResponsePrivate(
    UpdateUserResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ UpdateUser response element from \a xml.
 */
void UpdateUserResponsePrivate::parseUpdateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
