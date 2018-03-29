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

#include "createtrailresponse.h"
#include "createtrailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/**
 * @class  CreateTrailResponse
 *
 * @brief  Handles CloudTrail CreateTrail responses.
 *
 * @see    CloudTrailClient::createTrail
 */

/**
 * @brief  Constructs a new CreateTrailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrailResponse::CreateTrailResponse(
        const CreateTrailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateTrailResponse(new CreateTrailResponsePrivate(this), parent)
{
    setRequest(new CreateTrailRequest(request));
    setReply(reply);
}

const CreateTrailRequest * CreateTrailResponse::request() const
{
    Q_D(const CreateTrailResponse);
    return static_cast<const CreateTrailRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail CreateTrail response.
 *
 * @param  response  Response to parse.
 */
void CreateTrailResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTrailResponsePrivate
 *
 * @brief  Private implementation for CreateTrailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrailResponse instance.
 */
CreateTrailResponsePrivate::CreateTrailResponsePrivate(
    CreateTrailResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail CreateTrailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrailResponsePrivate::parseCreateTrailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrailResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws
