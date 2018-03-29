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

#include "updateexpirationforhitresponse.h"
#include "updateexpirationforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  UpdateExpirationForHITResponse
 *
 * @brief  Handles MTurk UpdateExpirationForHIT responses.
 *
 * @see    MTurkClient::updateExpirationForHIT
 */

/**
 * @brief  Constructs a new UpdateExpirationForHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateExpirationForHITResponse::UpdateExpirationForHITResponse(
        const UpdateExpirationForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateExpirationForHITResponsePrivate(this), parent)
{
    setRequest(new UpdateExpirationForHITRequest(request));
    setReply(reply);
}

const UpdateExpirationForHITRequest * UpdateExpirationForHITResponse::request() const
{
    Q_D(const UpdateExpirationForHITResponse);
    return static_cast<const UpdateExpirationForHITRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk UpdateExpirationForHIT response.
 *
 * @param  response  Response to parse.
 */
void UpdateExpirationForHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateExpirationForHITResponsePrivate
 *
 * @brief  Private implementation for UpdateExpirationForHITResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateExpirationForHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateExpirationForHITResponse instance.
 */
UpdateExpirationForHITResponsePrivate::UpdateExpirationForHITResponsePrivate(
    UpdateExpirationForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk UpdateExpirationForHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateExpirationForHITResponsePrivate::UpdateExpirationForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExpirationForHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
