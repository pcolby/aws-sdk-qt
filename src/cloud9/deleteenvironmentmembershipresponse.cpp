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

#include "deleteenvironmentmembershipresponse.h"
#include "deleteenvironmentmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/**
 * @class  DeleteEnvironmentMembershipResponse
 *
 * @brief  Handles Cloud9 DeleteEnvironmentMembership responses.
 *
 * @see    Cloud9Client::deleteEnvironmentMembership
 */

/**
 * @brief  Constructs a new DeleteEnvironmentMembershipResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEnvironmentMembershipResponse::DeleteEnvironmentMembershipResponse(
        const DeleteEnvironmentMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteEnvironmentMembershipResponse(new DeleteEnvironmentMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentMembershipRequest(request));
    setReply(reply);
}

const DeleteEnvironmentMembershipRequest * DeleteEnvironmentMembershipResponse::request() const
{
    Q_D(const DeleteEnvironmentMembershipResponse);
    return static_cast<const DeleteEnvironmentMembershipRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 DeleteEnvironmentMembership response.
 *
 * @param  response  Response to parse.
 */
void DeleteEnvironmentMembershipResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEnvironmentMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentMembershipResponsePrivate
 *
 * @brief  Private implementation for DeleteEnvironmentMembershipResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentMembershipResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEnvironmentMembershipResponse instance.
 */
DeleteEnvironmentMembershipResponsePrivate::DeleteEnvironmentMembershipResponsePrivate(
    DeleteEnvironmentMembershipResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 DeleteEnvironmentMembershipResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEnvironmentMembershipResponsePrivate::parseDeleteEnvironmentMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentMembershipResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace QtAws
