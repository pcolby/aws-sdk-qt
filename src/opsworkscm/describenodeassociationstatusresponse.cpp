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

#include "describenodeassociationstatusresponse.h"
#include "describenodeassociationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  DescribeNodeAssociationStatusResponse
 *
 * @brief  Handles OpsWorksCM DescribeNodeAssociationStatus responses.
 *
 * @see    OpsWorksCMClient::describeNodeAssociationStatus
 */

/**
 * @brief  Constructs a new DescribeNodeAssociationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNodeAssociationStatusResponse::DescribeNodeAssociationStatusResponse(
        const DescribeNodeAssociationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new DescribeNodeAssociationStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeNodeAssociationStatusRequest(request));
    setReply(reply);
}

const DescribeNodeAssociationStatusRequest * DescribeNodeAssociationStatusResponse::request() const
{
    Q_D(const DescribeNodeAssociationStatusResponse);
    return static_cast<const DescribeNodeAssociationStatusRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM DescribeNodeAssociationStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeNodeAssociationStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNodeAssociationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNodeAssociationStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeNodeAssociationStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNodeAssociationStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNodeAssociationStatusResponse instance.
 */
DescribeNodeAssociationStatusResponsePrivate::DescribeNodeAssociationStatusResponsePrivate(
    DescribeNodeAssociationStatusResponse * const q) : OpsWorksCMResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM DescribeNodeAssociationStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNodeAssociationStatusResponsePrivate::DescribeNodeAssociationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNodeAssociationStatusResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws
