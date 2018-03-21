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

#include "setdataretrievalpolicyresponse.h"
#include "setdataretrievalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  SetDataRetrievalPolicyResponse
 *
 * @brief  Handles Glacier SetDataRetrievalPolicy responses.
 *
 * @see    GlacierClient::setDataRetrievalPolicy
 */

/**
 * @brief  Constructs a new SetDataRetrievalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetDataRetrievalPolicyResponse::SetDataRetrievalPolicyResponse(
        const SetDataRetrievalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new SetDataRetrievalPolicyResponsePrivate(this), parent)
{
    setRequest(new SetDataRetrievalPolicyRequest(request));
    setReply(reply);
}

const SetDataRetrievalPolicyRequest * SetDataRetrievalPolicyResponse::request() const
{
    Q_D(const SetDataRetrievalPolicyResponse);
    return static_cast<const SetDataRetrievalPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier SetDataRetrievalPolicy response.
 *
 * @param  response  Response to parse.
 */
void SetDataRetrievalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetDataRetrievalPolicyResponsePrivate
 *
 * @brief  Private implementation for SetDataRetrievalPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetDataRetrievalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetDataRetrievalPolicyResponse instance.
 */
SetDataRetrievalPolicyResponsePrivate::SetDataRetrievalPolicyResponsePrivate(
    SetDataRetrievalPolicyQueueResponse * const q) : SetDataRetrievalPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Glacier SetDataRetrievalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetDataRetrievalPolicyResponsePrivate::SetDataRetrievalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetDataRetrievalPolicyResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
