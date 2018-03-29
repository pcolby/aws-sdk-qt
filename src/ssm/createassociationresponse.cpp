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

#include "createassociationresponse.h"
#include "createassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  CreateAssociationResponse
 *
 * @brief  Handles SSM CreateAssociation responses.
 *
 * @see    SSMClient::createAssociation
 */

/**
 * @brief  Constructs a new CreateAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAssociationResponse::CreateAssociationResponse(
        const CreateAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateAssociationRequest(request));
    setReply(reply);
}

const CreateAssociationRequest * CreateAssociationResponse::request() const
{
    Q_D(const CreateAssociationResponse);
    return static_cast<const CreateAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateAssociation response.
 *
 * @param  response  Response to parse.
 */
void CreateAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAssociationResponsePrivate
 *
 * @brief  Private implementation for CreateAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAssociationResponse instance.
 */
CreateAssociationResponsePrivate::CreateAssociationResponsePrivate(
    CreateAssociationResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAssociationResponsePrivate::CreateAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssociationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
