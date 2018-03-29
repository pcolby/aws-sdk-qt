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

#include "createthreatintelsetresponse.h"
#include "createthreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  CreateThreatIntelSetResponse
 *
 * @brief  Handles GuardDuty CreateThreatIntelSet responses.
 *
 * @see    GuardDutyClient::createThreatIntelSet
 */

/**
 * @brief  Constructs a new CreateThreatIntelSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateThreatIntelSetResponse::CreateThreatIntelSetResponse(
        const CreateThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new CreateThreatIntelSetRequest(request));
    setReply(reply);
}

const CreateThreatIntelSetRequest * CreateThreatIntelSetResponse::request() const
{
    Q_D(const CreateThreatIntelSetResponse);
    return static_cast<const CreateThreatIntelSetRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty CreateThreatIntelSet response.
 *
 * @param  response  Response to parse.
 */
void CreateThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateThreatIntelSetResponsePrivate
 *
 * @brief  Private implementation for CreateThreatIntelSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThreatIntelSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateThreatIntelSetResponse instance.
 */
CreateThreatIntelSetResponsePrivate::CreateThreatIntelSetResponsePrivate(
    CreateThreatIntelSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty CreateThreatIntelSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateThreatIntelSetResponsePrivate::CreateThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
