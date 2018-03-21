/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createlaunchtemplateresponse.h"
#include "createlaunchtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateLaunchTemplateResponse
 *
 * @brief  Handles EC2 CreateLaunchTemplate responses.
 *
 * @see    EC2Client::createLaunchTemplate
 */

/**
 * @brief  Constructs a new CreateLaunchTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLaunchTemplateResponse::CreateLaunchTemplateResponse(
        const CreateLaunchTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateLaunchTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchTemplateRequest(request));
    setReply(reply);
}

const CreateLaunchTemplateRequest * CreateLaunchTemplateResponse::request() const
{
    Q_D(const CreateLaunchTemplateResponse);
    return static_cast<const CreateLaunchTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateLaunchTemplate response.
 *
 * @param  response  Response to parse.
 */
void CreateLaunchTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLaunchTemplateResponsePrivate
 *
 * @brief  Private implementation for CreateLaunchTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLaunchTemplateResponse instance.
 */
CreateLaunchTemplateResponsePrivate::CreateLaunchTemplateResponsePrivate(
    CreateLaunchTemplateQueueResponse * const q) : CreateLaunchTemplatePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateLaunchTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLaunchTemplateResponsePrivate::CreateLaunchTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchTemplateResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
