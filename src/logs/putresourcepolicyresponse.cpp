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

#include "putresourcepolicyresponse.h"
#include "putresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  PutResourcePolicyResponse
 *
 * @brief  Handles CloudWatchLogs PutResourcePolicy responses.
 *
 * @see    CloudWatchLogsClient::putResourcePolicy
 */

/**
 * @brief  Constructs a new PutResourcePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutResourcePolicyResponse::PutResourcePolicyResponse(
        const PutResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new PutResourcePolicyRequest(request));
    setReply(reply);
}

const PutResourcePolicyRequest * PutResourcePolicyResponse::request() const
{
    Q_D(const PutResourcePolicyResponse);
    return static_cast<const PutResourcePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutResourcePolicy response.
 *
 * @param  response  Response to parse.
 */
void PutResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutResourcePolicyResponsePrivate
 *
 * @brief  Private implementation for PutResourcePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutResourcePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutResourcePolicyResponse instance.
 */
PutResourcePolicyResponsePrivate::PutResourcePolicyResponsePrivate(
    PutResourcePolicyResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutResourcePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutResourcePolicyResponsePrivate::PutResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourcePolicyResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
