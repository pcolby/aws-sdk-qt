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

#include "issuecertificateresponse.h"
#include "issuecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  IssueCertificateResponse
 *
 * @brief  Handles ACMPCA IssueCertificate responses.
 *
 * @see    ACMPCAClient::issueCertificate
 */

/**
 * @brief  Constructs a new IssueCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
IssueCertificateResponse::IssueCertificateResponse(
        const IssueCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new IssueCertificateResponsePrivate(this), parent)
{
    setRequest(new IssueCertificateRequest(request));
    setReply(reply);
}

const IssueCertificateRequest * IssueCertificateResponse::request() const
{
    Q_D(const IssueCertificateResponse);
    return static_cast<const IssueCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA IssueCertificate response.
 *
 * @param  response  Response to parse.
 */
void IssueCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(IssueCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  IssueCertificateResponsePrivate
 *
 * @brief  Private implementation for IssueCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IssueCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IssueCertificateResponse instance.
 */
IssueCertificateResponsePrivate::IssueCertificateResponsePrivate(
    IssueCertificateResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA IssueCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void IssueCertificateResponsePrivate::parseIssueCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IssueCertificateResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
