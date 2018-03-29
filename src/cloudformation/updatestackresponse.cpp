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

#include "updatestackresponse.h"
#include "updatestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  UpdateStackResponse
 *
 * @brief  Handles CloudFormation UpdateStack responses.
 *
 * @see    CloudFormationClient::updateStack
 */

/**
 * @brief  Constructs a new UpdateStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStackResponse::UpdateStackResponse(
        const UpdateStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new UpdateStackResponsePrivate(this), parent)
{
    setRequest(new UpdateStackRequest(request));
    setReply(reply);
}

const UpdateStackRequest * UpdateStackResponse::request() const
{
    Q_D(const UpdateStackResponse);
    return static_cast<const UpdateStackRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation UpdateStack response.
 *
 * @param  response  Response to parse.
 */
void UpdateStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateStackResponsePrivate
 *
 * @brief  Private implementation for UpdateStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateStackResponse instance.
 */
UpdateStackResponsePrivate::UpdateStackResponsePrivate(
    UpdateStackResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation UpdateStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateStackResponsePrivate::parseUpdateStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStackResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
