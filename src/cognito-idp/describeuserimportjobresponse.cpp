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

#include "describeuserimportjobresponse.h"
#include "describeuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserImportJobResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeUserImportJob responses.
 *
 * @see    CognitoIdentityProviderClient::describeUserImportJob
 */

/**
 * @brief  Constructs a new DescribeUserImportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserImportJobResponse::DescribeUserImportJobResponse(
        const DescribeUserImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeUserImportJobRequest(request));
    setReply(reply);
}

const DescribeUserImportJobRequest * DescribeUserImportJobResponse::request() const
{
    Q_D(const DescribeUserImportJobResponse);
    return static_cast<const DescribeUserImportJobRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeUserImportJob response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserImportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeUserImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserImportJobResponsePrivate
 *
 * @brief  Private implementation for DescribeUserImportJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserImportJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserImportJobResponse instance.
 */
DescribeUserImportJobResponsePrivate::DescribeUserImportJobResponsePrivate(
    DescribeUserImportJobResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeUserImportJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserImportJobResponsePrivate::parseDescribeUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserImportJobResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
