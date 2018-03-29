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

#include "getresourceconfighistoryresponse.h"
#include "getresourceconfighistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetResourceConfigHistoryResponse
 *
 * @brief  Handles ConfigService GetResourceConfigHistory responses.
 *
 * @see    ConfigServiceClient::getResourceConfigHistory
 */

/**
 * @brief  Constructs a new GetResourceConfigHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourceConfigHistoryResponse::GetResourceConfigHistoryResponse(
        const GetResourceConfigHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetResourceConfigHistoryResponsePrivate(this), parent)
{
    setRequest(new GetResourceConfigHistoryRequest(request));
    setReply(reply);
}

const GetResourceConfigHistoryRequest * GetResourceConfigHistoryResponse::request() const
{
    Q_D(const GetResourceConfigHistoryResponse);
    return static_cast<const GetResourceConfigHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetResourceConfigHistory response.
 *
 * @param  response  Response to parse.
 */
void GetResourceConfigHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourceConfigHistoryResponsePrivate
 *
 * @brief  Private implementation for GetResourceConfigHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceConfigHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourceConfigHistoryResponse instance.
 */
GetResourceConfigHistoryResponsePrivate::GetResourceConfigHistoryResponsePrivate(
    GetResourceConfigHistoryResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetResourceConfigHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourceConfigHistoryResponsePrivate::GetResourceConfigHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceConfigHistoryResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
