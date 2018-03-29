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

#include "acceptcertificatetransferresponse.h"
#include "acceptcertificatetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  AcceptCertificateTransferResponse
 *
 * @brief  Handles IoT AcceptCertificateTransfer responses.
 *
 * @see    IoTClient::acceptCertificateTransfer
 */

/**
 * @brief  Constructs a new AcceptCertificateTransferResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptCertificateTransferResponse::AcceptCertificateTransferResponse(
        const AcceptCertificateTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AcceptCertificateTransferResponsePrivate(this), parent)
{
    setRequest(new AcceptCertificateTransferRequest(request));
    setReply(reply);
}

const AcceptCertificateTransferRequest * AcceptCertificateTransferResponse::request() const
{
    Q_D(const AcceptCertificateTransferResponse);
    return static_cast<const AcceptCertificateTransferRequest *>(d->request);
}

/**
 * @brief  Parse a IoT AcceptCertificateTransfer response.
 *
 * @param  response  Response to parse.
 */
void AcceptCertificateTransferResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptCertificateTransferResponsePrivate
 *
 * @brief  Private implementation for AcceptCertificateTransferResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptCertificateTransferResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptCertificateTransferResponse instance.
 */
AcceptCertificateTransferResponsePrivate::AcceptCertificateTransferResponsePrivate(
    AcceptCertificateTransferQueueResponse * const q) : AcceptCertificateTransferPrivate(q)
{

}

/**
 * @brief  Parse an IoT AcceptCertificateTransferResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptCertificateTransferResponsePrivate::AcceptCertificateTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptCertificateTransferResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
