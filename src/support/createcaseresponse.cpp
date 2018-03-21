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

#include "createcaseresponse.h"
#include "createcaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  CreateCaseResponse
 *
 * @brief  Handles Support CreateCase responses.
 *
 * @see    SupportClient::createCase
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCaseResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new CreateCaseResponsePrivate(this), parent)
{
    setRequest(new CreateCaseRequest(request));
    setReply(reply);
}

const CreateCaseRequest * CreateCaseResponse::request() const
{
    Q_D(const CreateCaseResponse);
    return static_cast<const CreateCaseRequest *>(d->request);
}

/**
 * @brief  Parse a Support CreateCase response.
 *
 * @param  response  Response to parse.
 */
void CreateCaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCaseResponsePrivate
 *
 * @brief  Private implementation for CreateCaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCaseResponse instance.
 */
CreateCaseResponsePrivate::CreateCaseResponsePrivate(
    CreateCaseQueueResponse * const q) : CreateCasePrivate(q)
{

}

/**
 * @brief  Parse an Support CreateCaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCaseResponsePrivate::CreateCaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCaseResponse"));
    /// @todo
}

} // namespace Support
} // namespace AWS
