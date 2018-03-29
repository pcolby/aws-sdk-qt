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

#include "buildsuggestersresponse.h"
#include "buildsuggestersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  BuildSuggestersResponse
 *
 * @brief  Handles CloudSearch BuildSuggesters responses.
 *
 * @see    CloudSearchClient::buildSuggesters
 */

/**
 * @brief  Constructs a new BuildSuggestersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BuildSuggestersResponse::BuildSuggestersResponse(
        const BuildSuggestersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new BuildSuggestersResponsePrivate(this), parent)
{
    setRequest(new BuildSuggestersRequest(request));
    setReply(reply);
}

const BuildSuggestersRequest * BuildSuggestersResponse::request() const
{
    Q_D(const BuildSuggestersResponse);
    return static_cast<const BuildSuggestersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch BuildSuggesters response.
 *
 * @param  response  Response to parse.
 */
void BuildSuggestersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BuildSuggestersResponsePrivate
 *
 * @brief  Private implementation for BuildSuggestersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BuildSuggestersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BuildSuggestersResponse instance.
 */
BuildSuggestersResponsePrivate::BuildSuggestersResponsePrivate(
    BuildSuggestersQueueResponse * const q) : BuildSuggestersPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch BuildSuggestersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BuildSuggestersResponsePrivate::BuildSuggestersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BuildSuggestersResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
