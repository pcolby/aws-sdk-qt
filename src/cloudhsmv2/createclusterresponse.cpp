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

#include "createclusterresponse.h"
#include "createclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/**
 * @class  CreateClusterResponse
 *
 * @brief  Handles CloudHSMV2 CreateCluster responses.
 *
 * @see    CloudHSMV2Client::createCluster
 */

/**
 * @brief  Constructs a new CreateClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterResponse::CreateClusterResponse(
        const CreateClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new CreateClusterResponsePrivate(this), parent)
{
    setRequest(new CreateClusterRequest(request));
    setReply(reply);
}

const CreateClusterRequest * CreateClusterResponse::request() const
{
    Q_D(const CreateClusterResponse);
    return static_cast<const CreateClusterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSMV2 CreateCluster response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClusterResponsePrivate
 *
 * @brief  Private implementation for CreateClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterResponse instance.
 */
CreateClusterResponsePrivate::CreateClusterResponsePrivate(
    CreateClusterResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudHSMV2 CreateClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterResponsePrivate::parseCreateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterResponse"));
    /// @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
