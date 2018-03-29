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

#include "createconstraintresponse.h"
#include "createconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CreateConstraintResponse
 *
 * @brief  Handles ServiceCatalog CreateConstraint responses.
 *
 * @see    ServiceCatalogClient::createConstraint
 */

/**
 * @brief  Constructs a new CreateConstraintResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConstraintResponse::CreateConstraintResponse(
        const CreateConstraintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateConstraintResponsePrivate(this), parent)
{
    setRequest(new CreateConstraintRequest(request));
    setReply(reply);
}

const CreateConstraintRequest * CreateConstraintResponse::request() const
{
    Q_D(const CreateConstraintResponse);
    return static_cast<const CreateConstraintRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreateConstraint response.
 *
 * @param  response  Response to parse.
 */
void CreateConstraintResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConstraintResponsePrivate
 *
 * @brief  Private implementation for CreateConstraintResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConstraintResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConstraintResponse instance.
 */
CreateConstraintResponsePrivate::CreateConstraintResponsePrivate(
    CreateConstraintQueueResponse * const q) : CreateConstraintPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreateConstraintResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConstraintResponsePrivate::CreateConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConstraintResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
