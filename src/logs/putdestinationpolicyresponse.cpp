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

#include "putdestinationpolicyresponse.h"
#include "putdestinationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  PutDestinationPolicyResponse
 *
 * @brief  Handles CloudWatchLogs PutDestinationPolicy responses.
 *
 * @see    CloudWatchLogsClient::putDestinationPolicy
 */

/**
 * @brief  Constructs a new PutDestinationPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDestinationPolicyResponse::PutDestinationPolicyResponse(
        const PutDestinationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutDestinationPolicyResponsePrivate(this), parent)
{
    setRequest(new PutDestinationPolicyRequest(request));
    setReply(reply);
}

const PutDestinationPolicyRequest * PutDestinationPolicyResponse::request() const
{
    Q_D(const PutDestinationPolicyResponse);
    return static_cast<const PutDestinationPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutDestinationPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutDestinationPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutDestinationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutDestinationPolicyResponsePrivate
 *
 * @brief  Private implementation for PutDestinationPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDestinationPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutDestinationPolicyResponse instance.
 */
PutDestinationPolicyResponsePrivate::PutDestinationPolicyResponsePrivate(
    PutDestinationPolicyResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutDestinationPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutDestinationPolicyResponsePrivate::parsePutDestinationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDestinationPolicyResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
