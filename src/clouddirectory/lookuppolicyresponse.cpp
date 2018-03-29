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

#include "lookuppolicyresponse.h"
#include "lookuppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  LookupPolicyResponse
 *
 * @brief  Handles CloudDirectory LookupPolicy responses.
 *
 * @see    CloudDirectoryClient::lookupPolicy
 */

/**
 * @brief  Constructs a new LookupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
LookupPolicyResponse::LookupPolicyResponse(
        const LookupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new LookupPolicyResponsePrivate(this), parent)
{
    setRequest(new LookupPolicyRequest(request));
    setReply(reply);
}

const LookupPolicyRequest * LookupPolicyResponse::request() const
{
    Q_D(const LookupPolicyResponse);
    return static_cast<const LookupPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory LookupPolicy response.
 *
 * @param  response  Response to parse.
 */
void LookupPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(LookupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  LookupPolicyResponsePrivate
 *
 * @brief  Private implementation for LookupPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LookupPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LookupPolicyResponse instance.
 */
LookupPolicyResponsePrivate::LookupPolicyResponsePrivate(
    LookupPolicyResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory LookupPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void LookupPolicyResponsePrivate::LookupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LookupPolicyResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
