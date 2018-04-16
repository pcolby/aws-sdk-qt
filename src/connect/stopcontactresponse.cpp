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

#include "stopcontactresponse.h"
#include "stopcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StopContactResponse
 *
 * \brief The StopContactResponse class encapsulates Connect StopContact responses.
 *
 * \ingroup Connect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 *
 * \sa ConnectClient::stopContact
 */

/*!
 * @brief  Constructs a new StopContactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopContactResponse::StopContactResponse(
        const StopContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new StopContactResponsePrivate(this), parent)
{
    setRequest(new StopContactRequest(request));
    setReply(reply);
}

const StopContactRequest * StopContactResponse::request() const
{
    Q_D(const StopContactResponse);
    return static_cast<const StopContactRequest *>(d->request);
}

/*!
 * @brief  Parse a Connect StopContact response.
 *
 * @param  response  Response to parse.
 */
void StopContactResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StopContactResponsePrivate
 *
 * \brief Private implementation for StopContactResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopContactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopContactResponse instance.
 */
StopContactResponsePrivate::StopContactResponsePrivate(
    StopContactResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Connect StopContactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopContactResponsePrivate::parseStopContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopContactResponse"));
    /// @todo
}

} // namespace Connect
} // namespace QtAws
