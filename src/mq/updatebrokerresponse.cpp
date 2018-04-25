/*
    Copyright 2013-2018 Paul Colby

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

#include "updatebrokerresponse.h"
#include "updatebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::UpdateBrokerResponse
 * \brief The UpdateBrokerResponse class provides an interace for MQ UpdateBroker responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
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
 * Parses a successful MQ UpdateBroker \a response.
 */
void UpdateBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::UpdateBrokerResponsePrivate
 * \brief The UpdateBrokerResponsePrivate class provides private implementation for UpdateBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a UpdateBrokerResponsePrivate object with public implementation \a q.
 */
UpdateBrokerResponsePrivate::UpdateBrokerResponsePrivate(
    UpdateBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ UpdateBroker response element from \a xml.
 */
void UpdateBrokerResponsePrivate::parseUpdateBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
