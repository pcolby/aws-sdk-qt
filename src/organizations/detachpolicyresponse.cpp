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

#include "detachpolicyresponse.h"
#include "detachpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  DetachPolicyResponse
 *
 * @brief  Handles Organizations DetachPolicy responses.
 *
 * @see    OrganizationsClient::detachPolicy
 */

/**
 * @brief  Constructs a new DetachPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachPolicyResponse::DetachPolicyResponse(
        const DetachPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DetachPolicyResponsePrivate(this), parent)
{
    setRequest(new DetachPolicyRequest(request));
    setReply(reply);
}

const DetachPolicyRequest * DetachPolicyResponse::request() const
{
    Q_D(const DetachPolicyResponse);
    return static_cast<const DetachPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DetachPolicy response.
 *
 * @param  response  Response to parse.
 */
void DetachPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachPolicyResponsePrivate
 *
 * @brief  Private implementation for DetachPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachPolicyResponse instance.
 */
DetachPolicyResponsePrivate::DetachPolicyResponsePrivate(
    DetachPolicyResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations DetachPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachPolicyResponsePrivate::parseDetachPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachPolicyResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
