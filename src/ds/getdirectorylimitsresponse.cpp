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

#include "getdirectorylimitsresponse.h"
#include "getdirectorylimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  GetDirectoryLimitsResponse
 *
 * @brief  Handles DirectoryService GetDirectoryLimits responses.
 *
 * @see    DirectoryServiceClient::getDirectoryLimits
 */

/**
 * @brief  Constructs a new GetDirectoryLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDirectoryLimitsResponse::GetDirectoryLimitsResponse(
        const GetDirectoryLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new GetDirectoryLimitsResponsePrivate(this), parent)
{
    setRequest(new GetDirectoryLimitsRequest(request));
    setReply(reply);
}

const GetDirectoryLimitsRequest * GetDirectoryLimitsResponse::request() const
{
    Q_D(const GetDirectoryLimitsResponse);
    return static_cast<const GetDirectoryLimitsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService GetDirectoryLimits response.
 *
 * @param  response  Response to parse.
 */
void GetDirectoryLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDirectoryLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDirectoryLimitsResponsePrivate
 *
 * @brief  Private implementation for GetDirectoryLimitsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDirectoryLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDirectoryLimitsResponse instance.
 */
GetDirectoryLimitsResponsePrivate::GetDirectoryLimitsResponsePrivate(
    GetDirectoryLimitsResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService GetDirectoryLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDirectoryLimitsResponsePrivate::parseGetDirectoryLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDirectoryLimitsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
