/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "requestcertificateresponse.h"
#include "requestcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ACM {

/**
 * @class  RequestCertificateResponse
 *
 * @brief  Handles ACM RequestCertificate responses.
 *
 * @see    ACMClient::requestCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new RequestCertificateResponsePrivate(this), parent)
{
    setRequest(new RequestCertificateRequest(request));
    setReply(reply);
}

const RequestCertificateRequest * RequestCertificateResponse::request() const
{
    Q_D(const RequestCertificateResponse);
    return static_cast<const RequestCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM RequestCertificate response.
 *
 * @param  response  Response to parse.
 */
void RequestCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RequestCertificateResponsePrivate
 *
 * @brief  Private implementation for RequestCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RequestCertificateResponse instance.
 */
RequestCertificateResponsePrivate::RequestCertificateResponsePrivate(
    RequestCertificateQueueResponse * const q) : RequestCertificatePrivate(q)
{

}

/**
 * @brief  Parse an ACM RequestCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RequestCertificateResponsePrivate::RequestCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace AWS
