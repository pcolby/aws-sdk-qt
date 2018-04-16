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

#include "startoutboundvoicecontactresponse.h"
#include "startoutboundvoicecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StartOutboundVoiceContactResponse
 *
 * \brief The StartOutboundVoiceContactResponse class encapsulates Connect StartOutboundVoiceContact responses.
 *
 * \ingroup Connect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 *
 * \sa ConnectClient::startOutboundVoiceContact
 */

/*!
 * @brief  Constructs a new StartOutboundVoiceContactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartOutboundVoiceContactResponse::StartOutboundVoiceContactResponse(
        const StartOutboundVoiceContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new StartOutboundVoiceContactResponsePrivate(this), parent)
{
    setRequest(new StartOutboundVoiceContactRequest(request));
    setReply(reply);
}

const StartOutboundVoiceContactRequest * StartOutboundVoiceContactResponse::request() const
{
    Q_D(const StartOutboundVoiceContactResponse);
    return static_cast<const StartOutboundVoiceContactRequest *>(d->request);
}

/*!
 * @brief  Parse a Connect StartOutboundVoiceContact response.
 *
 * @param  response  Response to parse.
 */
void StartOutboundVoiceContactResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartOutboundVoiceContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartOutboundVoiceContactResponsePrivate
 *
 * \brief Private implementation for StartOutboundVoiceContactResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartOutboundVoiceContactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartOutboundVoiceContactResponse instance.
 */
StartOutboundVoiceContactResponsePrivate::StartOutboundVoiceContactResponsePrivate(
    StartOutboundVoiceContactResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Connect StartOutboundVoiceContactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartOutboundVoiceContactResponsePrivate::parseStartOutboundVoiceContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartOutboundVoiceContactResponse"));
    /// @todo
}

} // namespace Connect
} // namespace QtAws
