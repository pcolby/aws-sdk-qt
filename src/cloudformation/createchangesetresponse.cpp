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

#include "createchangesetresponse.h"
#include "createchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  CreateChangeSetResponse
 *
 * @brief  Handles CloudFormation CreateChangeSet responses.
 *
 * @see    CloudFormationClient::createChangeSet
 */

/**
 * @brief  Constructs a new CreateChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateChangeSetResponse::CreateChangeSetResponse(
        const CreateChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateChangeSetResponse(new CreateChangeSetResponsePrivate(this), parent)
{
    setRequest(new CreateChangeSetRequest(request));
    setReply(reply);
}

const CreateChangeSetRequest * CreateChangeSetResponse::request() const
{
    Q_D(const CreateChangeSetResponse);
    return static_cast<const CreateChangeSetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation CreateChangeSet response.
 *
 * @param  response  Response to parse.
 */
void CreateChangeSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateChangeSetResponsePrivate
 *
 * @brief  Private implementation for CreateChangeSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateChangeSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateChangeSetResponse instance.
 */
CreateChangeSetResponsePrivate::CreateChangeSetResponsePrivate(
    CreateChangeSetResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation CreateChangeSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateChangeSetResponsePrivate::parseCreateChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChangeSetResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
