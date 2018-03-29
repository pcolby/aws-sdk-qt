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

#include "getdataretrievalpolicyresponse.h"
#include "getdataretrievalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  GetDataRetrievalPolicyResponse
 *
 * @brief  Handles Glacier GetDataRetrievalPolicy responses.
 *
 * @see    GlacierClient::getDataRetrievalPolicy
 */

/**
 * @brief  Constructs a new GetDataRetrievalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataRetrievalPolicyResponse::GetDataRetrievalPolicyResponse(
        const GetDataRetrievalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetDataRetrievalPolicyResponse(new GetDataRetrievalPolicyResponsePrivate(this), parent)
{
    setRequest(new GetDataRetrievalPolicyRequest(request));
    setReply(reply);
}

const GetDataRetrievalPolicyRequest * GetDataRetrievalPolicyResponse::request() const
{
    Q_D(const GetDataRetrievalPolicyResponse);
    return static_cast<const GetDataRetrievalPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier GetDataRetrievalPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetDataRetrievalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDataRetrievalPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDataRetrievalPolicyResponsePrivate
 *
 * @brief  Private implementation for GetDataRetrievalPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataRetrievalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDataRetrievalPolicyResponse instance.
 */
GetDataRetrievalPolicyResponsePrivate::GetDataRetrievalPolicyResponsePrivate(
    GetDataRetrievalPolicyResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetDataRetrievalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDataRetrievalPolicyResponsePrivate::parseGetDataRetrievalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataRetrievalPolicyResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
