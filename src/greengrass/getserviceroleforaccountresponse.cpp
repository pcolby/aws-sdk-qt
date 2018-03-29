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

#include "getserviceroleforaccountresponse.h"
#include "getserviceroleforaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetServiceRoleForAccountResponse
 *
 * @brief  Handles Greengrass GetServiceRoleForAccount responses.
 *
 * @see    GreengrassClient::getServiceRoleForAccount
 */

/**
 * @brief  Constructs a new GetServiceRoleForAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServiceRoleForAccountResponse::GetServiceRoleForAccountResponse(
        const GetServiceRoleForAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetServiceRoleForAccountResponse(new GetServiceRoleForAccountResponsePrivate(this), parent)
{
    setRequest(new GetServiceRoleForAccountRequest(request));
    setReply(reply);
}

const GetServiceRoleForAccountRequest * GetServiceRoleForAccountResponse::request() const
{
    Q_D(const GetServiceRoleForAccountResponse);
    return static_cast<const GetServiceRoleForAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetServiceRoleForAccount response.
 *
 * @param  response  Response to parse.
 */
void GetServiceRoleForAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetServiceRoleForAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetServiceRoleForAccountResponsePrivate
 *
 * @brief  Private implementation for GetServiceRoleForAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceRoleForAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServiceRoleForAccountResponse instance.
 */
GetServiceRoleForAccountResponsePrivate::GetServiceRoleForAccountResponsePrivate(
    GetServiceRoleForAccountResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetServiceRoleForAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServiceRoleForAccountResponsePrivate::parseGetServiceRoleForAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceRoleForAccountResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
