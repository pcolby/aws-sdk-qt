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

#include "revokecertificateresponse.h"
#include "revokecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  RevokeCertificateResponse
 *
 * @brief  Handles ACMPCA RevokeCertificate responses.
 *
 * @see    ACMPCAClient::revokeCertificate
 */

/**
 * @brief  Constructs a new RevokeCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeCertificateResponse::RevokeCertificateResponse(
        const RevokeCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new RevokeCertificateResponsePrivate(this), parent)
{
    setRequest(new RevokeCertificateRequest(request));
    setReply(reply);
}

const RevokeCertificateRequest * RevokeCertificateResponse::request() const
{
    Q_D(const RevokeCertificateResponse);
    return static_cast<const RevokeCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA RevokeCertificate response.
 *
 * @param  response  Response to parse.
 */
void RevokeCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeCertificateResponsePrivate
 *
 * @brief  Private implementation for RevokeCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeCertificateResponse instance.
 */
RevokeCertificateResponsePrivate::RevokeCertificateResponsePrivate(
    RevokeCertificateResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA RevokeCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeCertificateResponsePrivate::parseRevokeCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeCertificateResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
