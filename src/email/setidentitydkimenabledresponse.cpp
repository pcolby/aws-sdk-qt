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

#include "setidentitydkimenabledresponse.h"
#include "setidentitydkimenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SetIdentityDkimEnabledResponse
 *
 * @brief  Handles SES SetIdentityDkimEnabled responses.
 *
 * @see    SESClient::setIdentityDkimEnabled
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityDkimEnabledResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetIdentityDkimEnabledResponsePrivate(this), parent)
{
    setRequest(new SetIdentityDkimEnabledRequest(request));
    setReply(reply);
}

const SetIdentityDkimEnabledRequest * SetIdentityDkimEnabledResponse::request() const
{
    Q_D(const SetIdentityDkimEnabledResponse);
    return static_cast<const SetIdentityDkimEnabledRequest *>(d->request);
}

/**
 * @brief  Parse a SES SetIdentityDkimEnabled response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityDkimEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIdentityDkimEnabledResponsePrivate
 *
 * @brief  Private implementation for SetIdentityDkimEnabledResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityDkimEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityDkimEnabledResponse instance.
 */
SetIdentityDkimEnabledResponsePrivate::SetIdentityDkimEnabledResponsePrivate(
    SetIdentityDkimEnabledQueueResponse * const q) : SetIdentityDkimEnabledPrivate(q)
{

}

/**
 * @brief  Parse an SES SetIdentityDkimEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityDkimEnabledResponsePrivate::SetIdentityDkimEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityDkimEnabledResponse"));
    /// @todo
}
