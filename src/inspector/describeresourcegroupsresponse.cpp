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

#include "describeresourcegroupsresponse.h"
#include "describeresourcegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsResponse
 *
 * \brief The DescribeResourceGroupsResponse class encapsulates Inspector DescribeResourceGroups responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeResourceGroups
 */

/*!
 * @brief  Constructs a new DescribeResourceGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResourceGroupsResponse::DescribeResourceGroupsResponse(
        const DescribeResourceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeResourceGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceGroupsRequest(request));
    setReply(reply);
}

const DescribeResourceGroupsRequest * DescribeResourceGroupsResponse::request() const
{
    Q_D(const DescribeResourceGroupsResponse);
    return static_cast<const DescribeResourceGroupsRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector DescribeResourceGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeResourceGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeResourceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeResourceGroupsResponsePrivate
 *
 * \brief Private implementation for DescribeResourceGroupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeResourceGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeResourceGroupsResponse instance.
 */
DescribeResourceGroupsResponsePrivate::DescribeResourceGroupsResponsePrivate(
    DescribeResourceGroupsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector DescribeResourceGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeResourceGroupsResponsePrivate::parseDescribeResourceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceGroupsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
