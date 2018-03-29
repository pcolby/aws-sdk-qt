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

#include "deleteevaluationresultsresponse.h"
#include "deleteevaluationresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteEvaluationResultsResponse
 *
 * @brief  Handles ConfigService DeleteEvaluationResults responses.
 *
 * @see    ConfigServiceClient::deleteEvaluationResults
 */

/**
 * @brief  Constructs a new DeleteEvaluationResultsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEvaluationResultsResponse::DeleteEvaluationResultsResponse(
        const DeleteEvaluationResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteEvaluationResultsResponsePrivate(this), parent)
{
    setRequest(new DeleteEvaluationResultsRequest(request));
    setReply(reply);
}

const DeleteEvaluationResultsRequest * DeleteEvaluationResultsResponse::request() const
{
    Q_D(const DeleteEvaluationResultsResponse);
    return static_cast<const DeleteEvaluationResultsRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteEvaluationResults response.
 *
 * @param  response  Response to parse.
 */
void DeleteEvaluationResultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEvaluationResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEvaluationResultsResponsePrivate
 *
 * @brief  Private implementation for DeleteEvaluationResultsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEvaluationResultsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEvaluationResultsResponse instance.
 */
DeleteEvaluationResultsResponsePrivate::DeleteEvaluationResultsResponsePrivate(
    DeleteEvaluationResultsResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteEvaluationResultsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEvaluationResultsResponsePrivate::DeleteEvaluationResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEvaluationResultsResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
