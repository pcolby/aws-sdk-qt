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

#include "describecertificatesresponse.h"
#include "describecertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeCertificatesResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeCertificates responses.
 *
 * @see    DatabaseMigrationServiceClient::describeCertificates
 */

/**
 * @brief  Constructs a new DescribeCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCertificatesResponse::DescribeCertificatesResponse(
        const DescribeCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeCertificatesResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificatesRequest(request));
    setReply(reply);
}

const DescribeCertificatesRequest * DescribeCertificatesResponse::request() const
{
    Q_D(const DescribeCertificatesResponse);
    return static_cast<const DescribeCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeCertificates response.
 *
 * @param  response  Response to parse.
 */
void DescribeCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCertificatesResponsePrivate
 *
 * @brief  Private implementation for DescribeCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCertificatesResponse instance.
 */
DescribeCertificatesResponsePrivate::DescribeCertificatesResponsePrivate(
    DescribeCertificatesQueueResponse * const q) : DescribeCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCertificatesResponsePrivate::DescribeCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificatesResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
