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

#include "requestcertificateresponse.h"
#include "requestcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/**
 * @class  RequestCertificateResponse
 *
 * @brief  Handles ACM RequestCertificate responses.
 *
 * @see    ACMClient::requestCertificate
 */

/**
 * @brief  Constructs a new RequestCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestCertificateResponse::RequestCertificateResponse(
        const RequestCertificateRequest &request,
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
    Q_D(RequestCertificateResponse);
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
    RequestCertificateResponse * const q) : ACMResponsePrivate(q)
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
} // namespace QtAws
