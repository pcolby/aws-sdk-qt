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

#include "updateenvironmentmembershipresponse.h"
#include "updateenvironmentmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/**
 * @class  UpdateEnvironmentMembershipResponse
 *
 * @brief  Handles Cloud9 UpdateEnvironmentMembership responses.
 *
 * @see    Cloud9Client::updateEnvironmentMembership
 */

/**
 * @brief  Constructs a new UpdateEnvironmentMembershipResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEnvironmentMembershipResponse::UpdateEnvironmentMembershipResponse(
        const UpdateEnvironmentMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new UpdateEnvironmentMembershipResponsePrivate(this), parent)
{
    setRequest(new UpdateEnvironmentMembershipRequest(request));
    setReply(reply);
}

const UpdateEnvironmentMembershipRequest * UpdateEnvironmentMembershipResponse::request() const
{
    Q_D(const UpdateEnvironmentMembershipResponse);
    return static_cast<const UpdateEnvironmentMembershipRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 UpdateEnvironmentMembership response.
 *
 * @param  response  Response to parse.
 */
void UpdateEnvironmentMembershipResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateEnvironmentMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEnvironmentMembershipResponsePrivate
 *
 * @brief  Private implementation for UpdateEnvironmentMembershipResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEnvironmentMembershipResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEnvironmentMembershipResponse instance.
 */
UpdateEnvironmentMembershipResponsePrivate::UpdateEnvironmentMembershipResponsePrivate(
    UpdateEnvironmentMembershipResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 UpdateEnvironmentMembershipResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEnvironmentMembershipResponsePrivate::UpdateEnvironmentMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEnvironmentMembershipResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace QtAws
