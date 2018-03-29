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

#include "describecacertificateresponse.h"
#include "describecacertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeCACertificateResponse
 *
 * @brief  Handles IoT DescribeCACertificate responses.
 *
 * @see    IoTClient::describeCACertificate
 */

/**
 * @brief  Constructs a new DescribeCACertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCACertificateResponse::DescribeCACertificateResponse(
        const DescribeCACertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeCACertificateResponsePrivate(this), parent)
{
    setRequest(new DescribeCACertificateRequest(request));
    setReply(reply);
}

const DescribeCACertificateRequest * DescribeCACertificateResponse::request() const
{
    Q_D(const DescribeCACertificateResponse);
    return static_cast<const DescribeCACertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeCACertificate response.
 *
 * @param  response  Response to parse.
 */
void DescribeCACertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCACertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCACertificateResponsePrivate
 *
 * @brief  Private implementation for DescribeCACertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCACertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCACertificateResponse instance.
 */
DescribeCACertificateResponsePrivate::DescribeCACertificateResponsePrivate(
    DescribeCACertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeCACertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCACertificateResponsePrivate::DescribeCACertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCACertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
