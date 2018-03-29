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

#include "describeuserresponse.h"
#include "describeuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DescribeUserResponse
 *
 * @brief  Handles WorkMail DescribeUser responses.
 *
 * @see    WorkMailClient::describeUser
 */

/**
 * @brief  Constructs a new DescribeUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserResponse::DescribeUserResponse(
        const DescribeUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeUserResponse(new DescribeUserResponsePrivate(this), parent)
{
    setRequest(new DescribeUserRequest(request));
    setReply(reply);
}

const DescribeUserRequest * DescribeUserResponse::request() const
{
    Q_D(const DescribeUserResponse);
    return static_cast<const DescribeUserRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DescribeUser response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserResponsePrivate
 *
 * @brief  Private implementation for DescribeUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserResponse instance.
 */
DescribeUserResponsePrivate::DescribeUserResponsePrivate(
    DescribeUserResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DescribeUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserResponsePrivate::parseDescribeUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
