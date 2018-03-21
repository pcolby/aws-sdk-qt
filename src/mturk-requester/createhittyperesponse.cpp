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

#include "createhittyperesponse.h"
#include "createhittyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  CreateHITTypeResponse
 *
 * @brief  Handles MTurk CreateHITType responses.
 *
 * @see    MTurkClient::createHITType
 */

/**
 * @brief  Constructs a new CreateHITTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHITTypeResponse::CreateHITTypeResponse(
        const CreateHITTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITTypeResponsePrivate(this), parent)
{
    setRequest(new CreateHITTypeRequest(request));
    setReply(reply);
}

const CreateHITTypeRequest * CreateHITTypeResponse::request() const
{
    Q_D(const CreateHITTypeResponse);
    return static_cast<const CreateHITTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk CreateHITType response.
 *
 * @param  response  Response to parse.
 */
void CreateHITTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateHITTypeResponsePrivate
 *
 * @brief  Private implementation for CreateHITTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHITTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHITTypeResponse instance.
 */
CreateHITTypeResponsePrivate::CreateHITTypeResponsePrivate(
    CreateHITTypeQueueResponse * const q) : CreateHITTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk CreateHITTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHITTypeResponsePrivate::CreateHITTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
