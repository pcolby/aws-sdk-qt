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

#include "createnetworkaclresponse.h"
#include "createnetworkaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateNetworkAclResponse
 *
 * @brief  Handles EC2 CreateNetworkAcl responses.
 *
 * @see    EC2Client::createNetworkAcl
 */

/**
 * @brief  Constructs a new CreateNetworkAclResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNetworkAclResponse::CreateNetworkAclResponse(
        const CreateNetworkAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateNetworkAclResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkAclRequest(request));
    setReply(reply);
}

const CreateNetworkAclRequest * CreateNetworkAclResponse::request() const
{
    Q_D(const CreateNetworkAclResponse);
    return static_cast<const CreateNetworkAclRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateNetworkAcl response.
 *
 * @param  response  Response to parse.
 */
void CreateNetworkAclResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNetworkAclResponsePrivate
 *
 * @brief  Private implementation for CreateNetworkAclResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkAclResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNetworkAclResponse instance.
 */
CreateNetworkAclResponsePrivate::CreateNetworkAclResponsePrivate(
    CreateNetworkAclResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateNetworkAclResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNetworkAclResponsePrivate::CreateNetworkAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkAclResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
