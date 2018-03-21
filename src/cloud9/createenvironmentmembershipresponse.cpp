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

#include "createenvironmentmembershipresponse.h"
#include "createenvironmentmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Cloud9 {

/**
 * @class  CreateEnvironmentMembershipResponse
 *
 * @brief  Handles Cloud9 CreateEnvironmentMembership responses.
 *
 * @see    Cloud9Client::createEnvironmentMembership
 */

/**
 * @brief  Constructs a new CreateEnvironmentMembershipResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEnvironmentMembershipResponse::CreateEnvironmentMembershipResponse(
        const CreateEnvironmentMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new CreateEnvironmentMembershipResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentMembershipRequest(request));
    setReply(reply);
}

const CreateEnvironmentMembershipRequest * CreateEnvironmentMembershipResponse::request() const
{
    Q_D(const CreateEnvironmentMembershipResponse);
    return static_cast<const CreateEnvironmentMembershipRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 CreateEnvironmentMembership response.
 *
 * @param  response  Response to parse.
 */
void CreateEnvironmentMembershipResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEnvironmentMembershipResponsePrivate
 *
 * @brief  Private implementation for CreateEnvironmentMembershipResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentMembershipResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEnvironmentMembershipResponse instance.
 */
CreateEnvironmentMembershipResponsePrivate::CreateEnvironmentMembershipResponsePrivate(
    CreateEnvironmentMembershipQueueResponse * const q) : CreateEnvironmentMembershipPrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 CreateEnvironmentMembershipResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEnvironmentMembershipResponsePrivate::CreateEnvironmentMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentMembershipResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace AWS
