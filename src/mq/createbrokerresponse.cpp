/*
    Copyright 2013-2019 Paul Colby

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

#include "createbrokerresponse.h"
#include "createbrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::CreateBrokerResponse
 * \brief The CreateBrokerResponse class provides an interace for MQ CreateBroker responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
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
 * Parses a successful MQ CreateBroker \a response.
 */
void CreateBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::CreateBrokerResponsePrivate
 * \brief The CreateBrokerResponsePrivate class provides private implementation for CreateBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a CreateBrokerResponsePrivate object with public implementation \a q.
 */
CreateBrokerResponsePrivate::CreateBrokerResponsePrivate(
    CreateBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ CreateBroker response element from \a xml.
 */
void CreateBrokerResponsePrivate::parseCreateBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
