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

#include "getcertificateresponse.h"
#include "getcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/**
 * @class  GetCertificateResponse
 *
 * @brief  Handles ACM GetCertificate responses.
 *
 * @see    ACMClient::getCertificate
 */

/**
 * @brief  Constructs a new GetCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCertificateResponse::GetCertificateResponse(
        const GetCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new GetCertificateResponsePrivate(this), parent)
{
    setRequest(new GetCertificateRequest(request));
    setReply(reply);
}

const GetCertificateRequest * GetCertificateResponse::request() const
{
    Q_D(const GetCertificateResponse);
    return static_cast<const GetCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM GetCertificate response.
 *
 * @param  response  Response to parse.
 */
void GetCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCertificateResponsePrivate
 *
 * @brief  Private implementation for GetCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCertificateResponse instance.
 */
GetCertificateResponsePrivate::GetCertificateResponsePrivate(
    GetCertificateResponse * const q) : ACMResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACM GetCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCertificateResponsePrivate::GetCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
