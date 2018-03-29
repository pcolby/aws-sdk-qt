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

#include "mergedeveloperidentitiesresponse.h"
#include "mergedeveloperidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  MergeDeveloperIdentitiesResponse
 *
 * @brief  Handles CognitoIdentity MergeDeveloperIdentities responses.
 *
 * @see    CognitoIdentityClient::mergeDeveloperIdentities
 */

/**
 * @brief  Constructs a new MergeDeveloperIdentitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MergeDeveloperIdentitiesResponse::MergeDeveloperIdentitiesResponse(
        const MergeDeveloperIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new MergeDeveloperIdentitiesResponsePrivate(this), parent)
{
    setRequest(new MergeDeveloperIdentitiesRequest(request));
    setReply(reply);
}

const MergeDeveloperIdentitiesRequest * MergeDeveloperIdentitiesResponse::request() const
{
    Q_D(const MergeDeveloperIdentitiesResponse);
    return static_cast<const MergeDeveloperIdentitiesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity MergeDeveloperIdentities response.
 *
 * @param  response  Response to parse.
 */
void MergeDeveloperIdentitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  MergeDeveloperIdentitiesResponsePrivate
 *
 * @brief  Private implementation for MergeDeveloperIdentitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MergeDeveloperIdentitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MergeDeveloperIdentitiesResponse instance.
 */
MergeDeveloperIdentitiesResponsePrivate::MergeDeveloperIdentitiesResponsePrivate(
    MergeDeveloperIdentitiesQueueResponse * const q) : MergeDeveloperIdentitiesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity MergeDeveloperIdentitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MergeDeveloperIdentitiesResponsePrivate::MergeDeveloperIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MergeDeveloperIdentitiesResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
