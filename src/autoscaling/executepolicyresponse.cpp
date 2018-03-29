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

#include "executepolicyresponse.h"
#include "executepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  ExecutePolicyResponse
 *
 * @brief  Handles AutoScaling ExecutePolicy responses.
 *
 * @see    AutoScalingClient::executePolicy
 */

/**
 * @brief  Constructs a new ExecutePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExecutePolicyResponse::ExecutePolicyResponse(
        const ExecutePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new ExecutePolicyResponsePrivate(this), parent)
{
    setRequest(new ExecutePolicyRequest(request));
    setReply(reply);
}

const ExecutePolicyRequest * ExecutePolicyResponse::request() const
{
    Q_D(const ExecutePolicyResponse);
    return static_cast<const ExecutePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling ExecutePolicy response.
 *
 * @param  response  Response to parse.
 */
void ExecutePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExecutePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ExecutePolicyResponsePrivate
 *
 * @brief  Private implementation for ExecutePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExecutePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExecutePolicyResponse instance.
 */
ExecutePolicyResponsePrivate::ExecutePolicyResponsePrivate(
    ExecutePolicyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling ExecutePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExecutePolicyResponsePrivate::parseExecutePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecutePolicyResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
