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

#include "describeorganizationresponse.h"
#include "describeorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DescribeOrganizationResponse
 *
 * @brief  Handles WorkMail DescribeOrganization responses.
 *
 * @see    WorkMailClient::describeOrganization
 */

/**
 * @brief  Constructs a new DescribeOrganizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrganizationResponse::DescribeOrganizationResponse(
        const DescribeOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DescribeOrganizationResponsePrivate(this), parent)
{
    setRequest(new DescribeOrganizationRequest(request));
    setReply(reply);
}

const DescribeOrganizationRequest * DescribeOrganizationResponse::request() const
{
    Q_D(const DescribeOrganizationResponse);
    return static_cast<const DescribeOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DescribeOrganization response.
 *
 * @param  response  Response to parse.
 */
void DescribeOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeOrganizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOrganizationResponsePrivate
 *
 * @brief  Private implementation for DescribeOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOrganizationResponse instance.
 */
DescribeOrganizationResponsePrivate::DescribeOrganizationResponsePrivate(
    DescribeOrganizationResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DescribeOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOrganizationResponsePrivate::parseDescribeOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrganizationResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
