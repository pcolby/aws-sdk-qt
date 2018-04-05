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

#include "putpolicyresponse.h"
#include "putpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/**
 * @class  PutPolicyResponse
 *
 * @brief  Handles FMS PutPolicy responses.
 *
 * @see    FMSClient::putPolicy
 */

/**
 * @brief  Constructs a new PutPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutPolicyResponse::PutPolicyResponse(
        const PutPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new PutPolicyResponsePrivate(this), parent)
{
    setRequest(new PutPolicyRequest(request));
    setReply(reply);
}

const PutPolicyRequest * PutPolicyResponse::request() const
{
    Q_D(const PutPolicyResponse);
    return static_cast<const PutPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a FMS PutPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutPolicyResponsePrivate
 *
 * @brief  Private implementation for PutPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutPolicyResponse instance.
 */
PutPolicyResponsePrivate::PutPolicyResponsePrivate(
    PutPolicyResponse * const q) : FMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an FMS PutPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutPolicyResponsePrivate::parsePutPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPolicyResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
