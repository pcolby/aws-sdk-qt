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

#include "describeusersresponse.h"
#include "describeusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeUsersResponse
 *
 * @brief  Handles WorkDocs DescribeUsers responses.
 *
 * @see    WorkDocsClient::describeUsers
 */

/**
 * @brief  Constructs a new DescribeUsersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUsersResponse::DescribeUsersResponse(
        const DescribeUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeUsersResponse(new DescribeUsersResponsePrivate(this), parent)
{
    setRequest(new DescribeUsersRequest(request));
    setReply(reply);
}

const DescribeUsersRequest * DescribeUsersResponse::request() const
{
    Q_D(const DescribeUsersResponse);
    return static_cast<const DescribeUsersRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeUsers response.
 *
 * @param  response  Response to parse.
 */
void DescribeUsersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUsersResponsePrivate
 *
 * @brief  Private implementation for DescribeUsersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUsersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUsersResponse instance.
 */
DescribeUsersResponsePrivate::DescribeUsersResponsePrivate(
    DescribeUsersResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeUsersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUsersResponsePrivate::parseDescribeUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUsersResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
