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

#include "deletebrokerresponse.h"
#include "deletebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DeleteBrokerResponse
 * \brief The DeleteBrokerResponse class provides an interace for MQ DeleteBroker responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::deleteBroker
 */

/*!
 * Constructs a DeleteBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBrokerResponse::DeleteBrokerResponse(
        const DeleteBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DeleteBrokerResponsePrivate(this), parent)
{
    setRequest(new DeleteBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBrokerRequest * DeleteBrokerResponse::request() const
{
    Q_D(const DeleteBrokerResponse);
    return static_cast<const DeleteBrokerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MQ DeleteBroker \a response.
 */
void DeleteBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::DeleteBrokerResponsePrivate
 * \brief The DeleteBrokerResponsePrivate class provides private implementation for DeleteBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DeleteBrokerResponsePrivate object with public implementation \a q.
 */
DeleteBrokerResponsePrivate::DeleteBrokerResponsePrivate(
    DeleteBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ DeleteBroker response element from \a xml.
 */
void DeleteBrokerResponsePrivate::parseDeleteBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
