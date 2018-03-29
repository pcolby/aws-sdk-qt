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

#include "updatenumberofdomaincontrollersresponse.h"
#include "updatenumberofdomaincontrollersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  UpdateNumberOfDomainControllersResponse
 *
 * @brief  Handles DirectoryService UpdateNumberOfDomainControllers responses.
 *
 * @see    DirectoryServiceClient::updateNumberOfDomainControllers
 */

/**
 * @brief  Constructs a new UpdateNumberOfDomainControllersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNumberOfDomainControllersResponse::UpdateNumberOfDomainControllersResponse(
        const UpdateNumberOfDomainControllersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new UpdateNumberOfDomainControllersResponsePrivate(this), parent)
{
    setRequest(new UpdateNumberOfDomainControllersRequest(request));
    setReply(reply);
}

const UpdateNumberOfDomainControllersRequest * UpdateNumberOfDomainControllersResponse::request() const
{
    Q_D(const UpdateNumberOfDomainControllersResponse);
    return static_cast<const UpdateNumberOfDomainControllersRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService UpdateNumberOfDomainControllers response.
 *
 * @param  response  Response to parse.
 */
void UpdateNumberOfDomainControllersResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateNumberOfDomainControllersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNumberOfDomainControllersResponsePrivate
 *
 * @brief  Private implementation for UpdateNumberOfDomainControllersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNumberOfDomainControllersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNumberOfDomainControllersResponse instance.
 */
UpdateNumberOfDomainControllersResponsePrivate::UpdateNumberOfDomainControllersResponsePrivate(
    UpdateNumberOfDomainControllersResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService UpdateNumberOfDomainControllersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNumberOfDomainControllersResponsePrivate::parseUpdateNumberOfDomainControllersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNumberOfDomainControllersResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
