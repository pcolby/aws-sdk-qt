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

#include "addiproutesresponse.h"
#include "addiproutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  AddIpRoutesResponse
 *
 * @brief  Handles DirectoryService AddIpRoutes responses.
 *
 * @see    DirectoryServiceClient::addIpRoutes
 */

/**
 * @brief  Constructs a new AddIpRoutesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddIpRoutesResponse::AddIpRoutesResponse(
        const AddIpRoutesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new AddIpRoutesResponsePrivate(this), parent)
{
    setRequest(new AddIpRoutesRequest(request));
    setReply(reply);
}

const AddIpRoutesRequest * AddIpRoutesResponse::request() const
{
    Q_D(const AddIpRoutesResponse);
    return static_cast<const AddIpRoutesRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService AddIpRoutes response.
 *
 * @param  response  Response to parse.
 */
void AddIpRoutesResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddIpRoutesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddIpRoutesResponsePrivate
 *
 * @brief  Private implementation for AddIpRoutesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddIpRoutesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddIpRoutesResponse instance.
 */
AddIpRoutesResponsePrivate::AddIpRoutesResponsePrivate(
    AddIpRoutesResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService AddIpRoutesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddIpRoutesResponsePrivate::AddIpRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddIpRoutesResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
