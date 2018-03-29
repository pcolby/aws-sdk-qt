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

#include "describehsmclientcertificatesresponse.h"
#include "describehsmclientcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeHsmClientCertificatesResponse
 *
 * @brief  Handles Redshift DescribeHsmClientCertificates responses.
 *
 * @see    RedshiftClient::describeHsmClientCertificates
 */

/**
 * @brief  Constructs a new DescribeHsmClientCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHsmClientCertificatesResponse::DescribeHsmClientCertificatesResponse(
        const DescribeHsmClientCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeHsmClientCertificatesResponsePrivate(this), parent)
{
    setRequest(new DescribeHsmClientCertificatesRequest(request));
    setReply(reply);
}

const DescribeHsmClientCertificatesRequest * DescribeHsmClientCertificatesResponse::request() const
{
    Q_D(const DescribeHsmClientCertificatesResponse);
    return static_cast<const DescribeHsmClientCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeHsmClientCertificates response.
 *
 * @param  response  Response to parse.
 */
void DescribeHsmClientCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeHsmClientCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHsmClientCertificatesResponsePrivate
 *
 * @brief  Private implementation for DescribeHsmClientCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmClientCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHsmClientCertificatesResponse instance.
 */
DescribeHsmClientCertificatesResponsePrivate::DescribeHsmClientCertificatesResponsePrivate(
    DescribeHsmClientCertificatesResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeHsmClientCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHsmClientCertificatesResponsePrivate::DescribeHsmClientCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHsmClientCertificatesResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
