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

#include "createcloudformationchangesetresponse.h"
#include "createcloudformationchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  CreateCloudFormationChangeSetResponse
 *
 * @brief  Handles ServerlessApplicationRepository CreateCloudFormationChangeSet responses.
 *
 * @see    ServerlessApplicationRepositoryClient::createCloudFormationChangeSet
 */

/**
 * @brief  Constructs a new CreateCloudFormationChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCloudFormationChangeSetResponse::CreateCloudFormationChangeSetResponse(
        const CreateCloudFormationChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new CreateCloudFormationChangeSetResponsePrivate(this), parent)
{
    setRequest(new CreateCloudFormationChangeSetRequest(request));
    setReply(reply);
}

const CreateCloudFormationChangeSetRequest * CreateCloudFormationChangeSetResponse::request() const
{
    Q_D(const CreateCloudFormationChangeSetResponse);
    return static_cast<const CreateCloudFormationChangeSetRequest *>(d->request);
}

/**
 * @brief  Parse a ServerlessApplicationRepository CreateCloudFormationChangeSet response.
 *
 * @param  response  Response to parse.
 */
void CreateCloudFormationChangeSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCloudFormationChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCloudFormationChangeSetResponsePrivate
 *
 * @brief  Private implementation for CreateCloudFormationChangeSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCloudFormationChangeSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCloudFormationChangeSetResponse instance.
 */
CreateCloudFormationChangeSetResponsePrivate::CreateCloudFormationChangeSetResponsePrivate(
    CreateCloudFormationChangeSetResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServerlessApplicationRepository CreateCloudFormationChangeSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCloudFormationChangeSetResponsePrivate::parseCreateCloudFormationChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCloudFormationChangeSetResponse"));
    /// @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
