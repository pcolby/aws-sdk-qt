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

#include "registercertificateresponse.h"
#include "registercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  RegisterCertificateResponse
 *
 * @brief  Handles IoT RegisterCertificate responses.
 *
 * @see    IoTClient::registerCertificate
 */

/**
 * @brief  Constructs a new RegisterCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterCertificateResponse::RegisterCertificateResponse(
        const RegisterCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new RegisterCertificateResponsePrivate(this), parent)
{
    setRequest(new RegisterCertificateRequest(request));
    setReply(reply);
}

const RegisterCertificateRequest * RegisterCertificateResponse::request() const
{
    Q_D(const RegisterCertificateResponse);
    return static_cast<const RegisterCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT RegisterCertificate response.
 *
 * @param  response  Response to parse.
 */
void RegisterCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterCertificateResponsePrivate
 *
 * @brief  Private implementation for RegisterCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterCertificateResponse instance.
 */
RegisterCertificateResponsePrivate::RegisterCertificateResponsePrivate(
    RegisterCertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT RegisterCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterCertificateResponsePrivate::parseRegisterCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
