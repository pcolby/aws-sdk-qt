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

#include "describeprojectresponse.h"
#include "describeprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  DescribeProjectResponse
 *
 * @brief  Handles CodeStar DescribeProject responses.
 *
 * @see    CodeStarClient::describeProject
 */

/**
 * @brief  Constructs a new DescribeProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProjectResponse::DescribeProjectResponse(
        const DescribeProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new DescribeProjectResponsePrivate(this), parent)
{
    setRequest(new DescribeProjectRequest(request));
    setReply(reply);
}

const DescribeProjectRequest * DescribeProjectResponse::request() const
{
    Q_D(const DescribeProjectResponse);
    return static_cast<const DescribeProjectRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar DescribeProject response.
 *
 * @param  response  Response to parse.
 */
void DescribeProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProjectResponsePrivate
 *
 * @brief  Private implementation for DescribeProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProjectResponse instance.
 */
DescribeProjectResponsePrivate::DescribeProjectResponsePrivate(
    DescribeProjectResponse * const q) : CodeStarResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar DescribeProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProjectResponsePrivate::DescribeProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace QtAws
