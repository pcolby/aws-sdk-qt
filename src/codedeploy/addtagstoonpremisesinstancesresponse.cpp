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

#include "addtagstoonpremisesinstancesresponse.h"
#include "addtagstoonpremisesinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  AddTagsToOnPremisesInstancesResponse
 *
 * @brief  Handles CodeDeploy AddTagsToOnPremisesInstances responses.
 *
 * @see    CodeDeployClient::addTagsToOnPremisesInstances
 */

/**
 * @brief  Constructs a new AddTagsToOnPremisesInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsToOnPremisesInstancesResponse::AddTagsToOnPremisesInstancesResponse(
        const AddTagsToOnPremisesInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AddTagsToOnPremisesInstancesResponse(new AddTagsToOnPremisesInstancesResponsePrivate(this), parent)
{
    setRequest(new AddTagsToOnPremisesInstancesRequest(request));
    setReply(reply);
}

const AddTagsToOnPremisesInstancesRequest * AddTagsToOnPremisesInstancesResponse::request() const
{
    Q_D(const AddTagsToOnPremisesInstancesResponse);
    return static_cast<const AddTagsToOnPremisesInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy AddTagsToOnPremisesInstances response.
 *
 * @param  response  Response to parse.
 */
void AddTagsToOnPremisesInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddTagsToOnPremisesInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddTagsToOnPremisesInstancesResponsePrivate
 *
 * @brief  Private implementation for AddTagsToOnPremisesInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToOnPremisesInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsToOnPremisesInstancesResponse instance.
 */
AddTagsToOnPremisesInstancesResponsePrivate::AddTagsToOnPremisesInstancesResponsePrivate(
    AddTagsToOnPremisesInstancesResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy AddTagsToOnPremisesInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsToOnPremisesInstancesResponsePrivate::parseAddTagsToOnPremisesInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToOnPremisesInstancesResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
