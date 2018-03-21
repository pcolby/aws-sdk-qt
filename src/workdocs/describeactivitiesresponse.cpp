/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeactivitiesresponse.h"
#include "describeactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeActivitiesResponse
 *
 * @brief  Handles WorkDocs DescribeActivities responses.
 *
 * @see    WorkDocsClient::describeActivities
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeActivitiesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeActivitiesResponsePrivate(this), parent)
{
    setRequest(new DescribeActivitiesRequest(request));
    setReply(reply);
}

const DescribeActivitiesRequest * DescribeActivitiesResponse::request() const
{
    Q_D(const DescribeActivitiesResponse);
    return static_cast<const DescribeActivitiesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeActivities response.
 *
 * @param  response  Response to parse.
 */
void DescribeActivitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeActivitiesResponsePrivate
 *
 * @brief  Private implementation for DescribeActivitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeActivitiesResponse instance.
 */
DescribeActivitiesResponsePrivate::DescribeActivitiesResponsePrivate(
    DescribeActivitiesQueueResponse * const q) : DescribeActivitiesPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeActivitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeActivitiesResponsePrivate::DescribeActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActivitiesResponse"));
    /// @todo
}
