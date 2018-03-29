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

#include "createnetworkaclentryresponse.h"
#include "createnetworkaclentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateNetworkAclEntryResponse
 *
 * @brief  Handles EC2 CreateNetworkAclEntry responses.
 *
 * @see    EC2Client::createNetworkAclEntry
 */

/**
 * @brief  Constructs a new CreateNetworkAclEntryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNetworkAclEntryResponse::CreateNetworkAclEntryResponse(
        const CreateNetworkAclEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateNetworkAclEntryResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkAclEntryRequest(request));
    setReply(reply);
}

const CreateNetworkAclEntryRequest * CreateNetworkAclEntryResponse::request() const
{
    Q_D(const CreateNetworkAclEntryResponse);
    return static_cast<const CreateNetworkAclEntryRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateNetworkAclEntry response.
 *
 * @param  response  Response to parse.
 */
void CreateNetworkAclEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNetworkAclEntryResponsePrivate
 *
 * @brief  Private implementation for CreateNetworkAclEntryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkAclEntryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNetworkAclEntryResponse instance.
 */
CreateNetworkAclEntryResponsePrivate::CreateNetworkAclEntryResponsePrivate(
    CreateNetworkAclEntryQueueResponse * const q) : CreateNetworkAclEntryPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateNetworkAclEntryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNetworkAclEntryResponsePrivate::CreateNetworkAclEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkAclEntryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
