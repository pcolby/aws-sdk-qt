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

#include "registercacertificateresponse.h"
#include "registercacertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  RegisterCACertificateResponse
 *
 * @brief  Handles IoT RegisterCACertificate responses.
 *
 * @see    IoTClient::registerCACertificate
 */

/**
 * @brief  Constructs a new RegisterCACertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterCACertificateResponse::RegisterCACertificateResponse(
        const RegisterCACertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RegisterCACertificateResponse(new RegisterCACertificateResponsePrivate(this), parent)
{
    setRequest(new RegisterCACertificateRequest(request));
    setReply(reply);
}

const RegisterCACertificateRequest * RegisterCACertificateResponse::request() const
{
    Q_D(const RegisterCACertificateResponse);
    return static_cast<const RegisterCACertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT RegisterCACertificate response.
 *
 * @param  response  Response to parse.
 */
void RegisterCACertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterCACertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterCACertificateResponsePrivate
 *
 * @brief  Private implementation for RegisterCACertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCACertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterCACertificateResponse instance.
 */
RegisterCACertificateResponsePrivate::RegisterCACertificateResponsePrivate(
    RegisterCACertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT RegisterCACertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterCACertificateResponsePrivate::parseRegisterCACertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCACertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
