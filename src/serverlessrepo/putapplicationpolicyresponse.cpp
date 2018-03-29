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

#include "putapplicationpolicyresponse.h"
#include "putapplicationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  PutApplicationPolicyResponse
 *
 * @brief  Handles ServerlessApplicationRepository PutApplicationPolicy responses.
 *
 * @see    ServerlessApplicationRepositoryClient::putApplicationPolicy
 */

/**
 * @brief  Constructs a new PutApplicationPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutApplicationPolicyResponse::PutApplicationPolicyResponse(
        const PutApplicationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new PutApplicationPolicyResponsePrivate(this), parent)
{
    setRequest(new PutApplicationPolicyRequest(request));
    setReply(reply);
}

const PutApplicationPolicyRequest * PutApplicationPolicyResponse::request() const
{
    Q_D(const PutApplicationPolicyResponse);
    return static_cast<const PutApplicationPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ServerlessApplicationRepository PutApplicationPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutApplicationPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutApplicationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutApplicationPolicyResponsePrivate
 *
 * @brief  Private implementation for PutApplicationPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutApplicationPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutApplicationPolicyResponse instance.
 */
PutApplicationPolicyResponsePrivate::PutApplicationPolicyResponsePrivate(
    PutApplicationPolicyResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServerlessApplicationRepository PutApplicationPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutApplicationPolicyResponsePrivate::PutApplicationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutApplicationPolicyResponse"));
    /// @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
