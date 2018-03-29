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

#include "createlaunchtemplateversionresponse.h"
#include "createlaunchtemplateversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateLaunchTemplateVersionResponse
 *
 * @brief  Handles EC2 CreateLaunchTemplateVersion responses.
 *
 * @see    EC2Client::createLaunchTemplateVersion
 */

/**
 * @brief  Constructs a new CreateLaunchTemplateVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLaunchTemplateVersionResponse::CreateLaunchTemplateVersionResponse(
        const CreateLaunchTemplateVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateLaunchTemplateVersionResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchTemplateVersionRequest(request));
    setReply(reply);
}

const CreateLaunchTemplateVersionRequest * CreateLaunchTemplateVersionResponse::request() const
{
    Q_D(const CreateLaunchTemplateVersionResponse);
    return static_cast<const CreateLaunchTemplateVersionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateLaunchTemplateVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateLaunchTemplateVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLaunchTemplateVersionResponsePrivate
 *
 * @brief  Private implementation for CreateLaunchTemplateVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchTemplateVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLaunchTemplateVersionResponse instance.
 */
CreateLaunchTemplateVersionResponsePrivate::CreateLaunchTemplateVersionResponsePrivate(
    CreateLaunchTemplateVersionResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateLaunchTemplateVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLaunchTemplateVersionResponsePrivate::CreateLaunchTemplateVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchTemplateVersionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
