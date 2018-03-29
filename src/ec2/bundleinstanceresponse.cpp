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

#include "bundleinstanceresponse.h"
#include "bundleinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  BundleInstanceResponse
 *
 * @brief  Handles EC2 BundleInstance responses.
 *
 * @see    EC2Client::bundleInstance
 */

/**
 * @brief  Constructs a new BundleInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BundleInstanceResponse::BundleInstanceResponse(
        const BundleInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new BundleInstanceResponsePrivate(this), parent)
{
    setRequest(new BundleInstanceRequest(request));
    setReply(reply);
}

const BundleInstanceRequest * BundleInstanceResponse::request() const
{
    Q_D(const BundleInstanceResponse);
    return static_cast<const BundleInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 BundleInstance response.
 *
 * @param  response  Response to parse.
 */
void BundleInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(BundleInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BundleInstanceResponsePrivate
 *
 * @brief  Private implementation for BundleInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BundleInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BundleInstanceResponse instance.
 */
BundleInstanceResponsePrivate::BundleInstanceResponsePrivate(
    BundleInstanceResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 BundleInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BundleInstanceResponsePrivate::BundleInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BundleInstanceResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
