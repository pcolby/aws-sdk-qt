/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rebootbrokerresponse.h"
#include "rebootbrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::RebootBrokerResponse
 *
 * \brief The RebootBrokerResponse class encapsulates MQ RebootBroker responses.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::rebootBroker
 */

/*!
 * @brief  Constructs a new RebootBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootBrokerResponse::RebootBrokerResponse(
        const RebootBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new RebootBrokerResponsePrivate(this), parent)
{
    setRequest(new RebootBrokerRequest(request));
    setReply(reply);
}

const RebootBrokerRequest * RebootBrokerResponse::request() const
{
    Q_D(const RebootBrokerResponse);
    return static_cast<const RebootBrokerRequest *>(d->request);
}

/*!
 * @brief  Parse a MQ RebootBroker response.
 *
 * @param  response  Response to parse.
 */
void RebootBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(RebootBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RebootBrokerResponsePrivate
 *
 * \brief Private implementation for RebootBrokerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RebootBrokerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootBrokerResponse instance.
 */
RebootBrokerResponsePrivate::RebootBrokerResponsePrivate(
    RebootBrokerResponse * const q) : MQResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MQ RebootBrokerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootBrokerResponsePrivate::parseRebootBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
