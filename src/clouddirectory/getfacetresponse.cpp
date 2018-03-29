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

#include "getfacetresponse.h"
#include "getfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetFacetResponse
 *
 * @brief  Handles CloudDirectory GetFacet responses.
 *
 * @see    CloudDirectoryClient::getFacet
 */

/**
 * @brief  Constructs a new GetFacetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFacetResponse::GetFacetResponse(
        const GetFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetFacetResponsePrivate(this), parent)
{
    setRequest(new GetFacetRequest(request));
    setReply(reply);
}

const GetFacetRequest * GetFacetResponse::request() const
{
    Q_D(const GetFacetResponse);
    return static_cast<const GetFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetFacet response.
 *
 * @param  response  Response to parse.
 */
void GetFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFacetResponsePrivate
 *
 * @brief  Private implementation for GetFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFacetResponse instance.
 */
GetFacetResponsePrivate::GetFacetResponsePrivate(
    GetFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFacetResponsePrivate::parseGetFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
