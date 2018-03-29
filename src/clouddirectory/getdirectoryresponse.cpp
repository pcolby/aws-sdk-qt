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

#include "getdirectoryresponse.h"
#include "getdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetDirectoryResponse
 *
 * @brief  Handles CloudDirectory GetDirectory responses.
 *
 * @see    CloudDirectoryClient::getDirectory
 */

/**
 * @brief  Constructs a new GetDirectoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDirectoryResponse::GetDirectoryResponse(
        const GetDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetDirectoryResponsePrivate(this), parent)
{
    setRequest(new GetDirectoryRequest(request));
    setReply(reply);
}

const GetDirectoryRequest * GetDirectoryResponse::request() const
{
    Q_D(const GetDirectoryResponse);
    return static_cast<const GetDirectoryRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetDirectory response.
 *
 * @param  response  Response to parse.
 */
void GetDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDirectoryResponsePrivate
 *
 * @brief  Private implementation for GetDirectoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDirectoryResponse instance.
 */
GetDirectoryResponsePrivate::GetDirectoryResponsePrivate(
    GetDirectoryResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDirectoryResponsePrivate::GetDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDirectoryResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
