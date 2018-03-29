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

#include "deleteutterancesresponse.h"
#include "deleteutterancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  DeleteUtterancesResponse
 *
 * @brief  Handles LexModelBuildingService DeleteUtterances responses.
 *
 * @see    LexModelBuildingServiceClient::deleteUtterances
 */

/**
 * @brief  Constructs a new DeleteUtterancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUtterancesResponse::DeleteUtterancesResponse(
        const DeleteUtterancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteUtterancesResponsePrivate(this), parent)
{
    setRequest(new DeleteUtterancesRequest(request));
    setReply(reply);
}

const DeleteUtterancesRequest * DeleteUtterancesResponse::request() const
{
    Q_D(const DeleteUtterancesResponse);
    return static_cast<const DeleteUtterancesRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteUtterances response.
 *
 * @param  response  Response to parse.
 */
void DeleteUtterancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUtterancesResponsePrivate
 *
 * @brief  Private implementation for DeleteUtterancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUtterancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUtterancesResponse instance.
 */
DeleteUtterancesResponsePrivate::DeleteUtterancesResponsePrivate(
    DeleteUtterancesResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteUtterancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUtterancesResponsePrivate::DeleteUtterancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUtterancesResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
