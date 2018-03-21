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

#include "deleteanalysisschemeresponse.h"
#include "deleteanalysisschemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DeleteAnalysisSchemeResponse
 *
 * @brief  Handles CloudSearch DeleteAnalysisScheme responses.
 *
 * @see    CloudSearchClient::deleteAnalysisScheme
 */

/**
 * @brief  Constructs a new DeleteAnalysisSchemeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAnalysisSchemeResponse::DeleteAnalysisSchemeResponse(
        const DeleteAnalysisSchemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteAnalysisSchemeResponsePrivate(this), parent)
{
    setRequest(new DeleteAnalysisSchemeRequest(request));
    setReply(reply);
}

const DeleteAnalysisSchemeRequest * DeleteAnalysisSchemeResponse::request() const
{
    Q_D(const DeleteAnalysisSchemeResponse);
    return static_cast<const DeleteAnalysisSchemeRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DeleteAnalysisScheme response.
 *
 * @param  response  Response to parse.
 */
void DeleteAnalysisSchemeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAnalysisSchemeResponsePrivate
 *
 * @brief  Private implementation for DeleteAnalysisSchemeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAnalysisSchemeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAnalysisSchemeResponse instance.
 */
DeleteAnalysisSchemeResponsePrivate::DeleteAnalysisSchemeResponsePrivate(
    DeleteAnalysisSchemeQueueResponse * const q) : DeleteAnalysisSchemePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DeleteAnalysisSchemeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAnalysisSchemeResponsePrivate::DeleteAnalysisSchemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnalysisSchemeResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
