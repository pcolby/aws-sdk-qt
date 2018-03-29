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

#include "getparameterhistoryresponse.h"
#include "getparameterhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetParameterHistoryResponse
 *
 * @brief  Handles SSM GetParameterHistory responses.
 *
 * @see    SSMClient::getParameterHistory
 */

/**
 * @brief  Constructs a new GetParameterHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParameterHistoryResponse::GetParameterHistoryResponse(
        const GetParameterHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetParameterHistoryResponsePrivate(this), parent)
{
    setRequest(new GetParameterHistoryRequest(request));
    setReply(reply);
}

const GetParameterHistoryRequest * GetParameterHistoryResponse::request() const
{
    Q_D(const GetParameterHistoryResponse);
    return static_cast<const GetParameterHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetParameterHistory response.
 *
 * @param  response  Response to parse.
 */
void GetParameterHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetParameterHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetParameterHistoryResponsePrivate
 *
 * @brief  Private implementation for GetParameterHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParameterHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetParameterHistoryResponse instance.
 */
GetParameterHistoryResponsePrivate::GetParameterHistoryResponsePrivate(
    GetParameterHistoryResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetParameterHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetParameterHistoryResponsePrivate::GetParameterHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParameterHistoryResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
