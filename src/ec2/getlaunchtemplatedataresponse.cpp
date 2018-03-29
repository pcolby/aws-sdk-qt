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

#include "getlaunchtemplatedataresponse.h"
#include "getlaunchtemplatedataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  GetLaunchTemplateDataResponse
 *
 * @brief  Handles EC2 GetLaunchTemplateData responses.
 *
 * @see    EC2Client::getLaunchTemplateData
 */

/**
 * @brief  Constructs a new GetLaunchTemplateDataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLaunchTemplateDataResponse::GetLaunchTemplateDataResponse(
        const GetLaunchTemplateDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetLaunchTemplateDataResponsePrivate(this), parent)
{
    setRequest(new GetLaunchTemplateDataRequest(request));
    setReply(reply);
}

const GetLaunchTemplateDataRequest * GetLaunchTemplateDataResponse::request() const
{
    Q_D(const GetLaunchTemplateDataResponse);
    return static_cast<const GetLaunchTemplateDataRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 GetLaunchTemplateData response.
 *
 * @param  response  Response to parse.
 */
void GetLaunchTemplateDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLaunchTemplateDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLaunchTemplateDataResponsePrivate
 *
 * @brief  Private implementation for GetLaunchTemplateDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLaunchTemplateDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLaunchTemplateDataResponse instance.
 */
GetLaunchTemplateDataResponsePrivate::GetLaunchTemplateDataResponsePrivate(
    GetLaunchTemplateDataResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 GetLaunchTemplateDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLaunchTemplateDataResponsePrivate::parseGetLaunchTemplateDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchTemplateDataResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
