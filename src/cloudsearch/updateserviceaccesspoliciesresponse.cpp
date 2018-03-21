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

#include "updateserviceaccesspoliciesresponse.h"
#include "updateserviceaccesspoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  UpdateServiceAccessPoliciesResponse
 *
 * @brief  Handles CloudSearch UpdateServiceAccessPolicies responses.
 *
 * @see    CloudSearchClient::updateServiceAccessPolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServiceAccessPoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new UpdateServiceAccessPoliciesResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceAccessPoliciesRequest(request));
    setReply(reply);
}

const UpdateServiceAccessPoliciesRequest * UpdateServiceAccessPoliciesResponse::request() const
{
    Q_D(const UpdateServiceAccessPoliciesResponse);
    return static_cast<const UpdateServiceAccessPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch UpdateServiceAccessPolicies response.
 *
 * @param  response  Response to parse.
 */
void UpdateServiceAccessPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateServiceAccessPoliciesResponsePrivate
 *
 * @brief  Private implementation for UpdateServiceAccessPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceAccessPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateServiceAccessPoliciesResponse instance.
 */
UpdateServiceAccessPoliciesResponsePrivate::UpdateServiceAccessPoliciesResponsePrivate(
    UpdateServiceAccessPoliciesQueueResponse * const q) : UpdateServiceAccessPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch UpdateServiceAccessPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateServiceAccessPoliciesResponsePrivate::UpdateServiceAccessPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceAccessPoliciesResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
