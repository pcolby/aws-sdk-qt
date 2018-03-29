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

#include "describecertificateresponse.h"
#include "describecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/**
 * @class  DescribeCertificateResponse
 *
 * @brief  Handles ACM DescribeCertificate responses.
 *
 * @see    ACMClient::describeCertificate
 */

/**
 * @brief  Constructs a new DescribeCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCertificateResponse::DescribeCertificateResponse(
        const DescribeCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new DescribeCertificateResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificateRequest(request));
    setReply(reply);
}

const DescribeCertificateRequest * DescribeCertificateResponse::request() const
{
    Q_D(const DescribeCertificateResponse);
    return static_cast<const DescribeCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM DescribeCertificate response.
 *
 * @param  response  Response to parse.
 */
void DescribeCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCertificateResponsePrivate
 *
 * @brief  Private implementation for DescribeCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCertificateResponse instance.
 */
DescribeCertificateResponsePrivate::DescribeCertificateResponsePrivate(
    DescribeCertificateQueueResponse * const q) : DescribeCertificatePrivate(q)
{

}

/**
 * @brief  Parse an ACM DescribeCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCertificateResponsePrivate::DescribeCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
