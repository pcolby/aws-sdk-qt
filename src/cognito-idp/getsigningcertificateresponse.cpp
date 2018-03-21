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

#include "getsigningcertificateresponse.h"
#include "getsigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetSigningCertificateResponse
 *
 * @brief  Handles CognitoIdentityProvider GetSigningCertificate responses.
 *
 * @see    CognitoIdentityProviderClient::getSigningCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSigningCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new GetSigningCertificateRequest(request));
    setReply(reply);
}

const GetSigningCertificateRequest * GetSigningCertificateResponse::request() const
{
    Q_D(const GetSigningCertificateResponse);
    return static_cast<const GetSigningCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GetSigningCertificate response.
 *
 * @param  response  Response to parse.
 */
void GetSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSigningCertificateResponsePrivate
 *
 * @brief  Private implementation for GetSigningCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSigningCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSigningCertificateResponse instance.
 */
GetSigningCertificateResponsePrivate::GetSigningCertificateResponsePrivate(
    GetSigningCertificateQueueResponse * const q) : GetSigningCertificatePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GetSigningCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSigningCertificateResponsePrivate::GetSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSigningCertificateResponse"));
    /// @todo
}
