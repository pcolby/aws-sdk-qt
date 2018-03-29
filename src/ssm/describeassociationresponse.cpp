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

#include "describeassociationresponse.h"
#include "describeassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeAssociationResponse
 *
 * @brief  Handles SSM DescribeAssociation responses.
 *
 * @see    SSMClient::describeAssociation
 */

/**
 * @brief  Constructs a new DescribeAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssociationResponse::DescribeAssociationResponse(
        const DescribeAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeAssociationResponse(new DescribeAssociationResponsePrivate(this), parent)
{
    setRequest(new DescribeAssociationRequest(request));
    setReply(reply);
}

const DescribeAssociationRequest * DescribeAssociationResponse::request() const
{
    Q_D(const DescribeAssociationResponse);
    return static_cast<const DescribeAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeAssociation response.
 *
 * @param  response  Response to parse.
 */
void DescribeAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAssociationResponsePrivate
 *
 * @brief  Private implementation for DescribeAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAssociationResponse instance.
 */
DescribeAssociationResponsePrivate::DescribeAssociationResponsePrivate(
    DescribeAssociationResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAssociationResponsePrivate::parseDescribeAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssociationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
