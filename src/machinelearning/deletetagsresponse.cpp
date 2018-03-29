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

#include "deletetagsresponse.h"
#include "deletetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  DeleteTagsResponse
 *
 * @brief  Handles MachineLearning DeleteTags responses.
 *
 * @see    MachineLearningClient::deleteTags
 */

/**
 * @brief  Constructs a new DeleteTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTagsResponse::DeleteTagsResponse(
        const DeleteTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteTagsResponsePrivate(this), parent)
{
    setRequest(new DeleteTagsRequest(request));
    setReply(reply);
}

const DeleteTagsRequest * DeleteTagsResponse::request() const
{
    Q_D(const DeleteTagsResponse);
    return static_cast<const DeleteTagsRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DeleteTags response.
 *
 * @param  response  Response to parse.
 */
void DeleteTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTagsResponsePrivate
 *
 * @brief  Private implementation for DeleteTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTagsResponse instance.
 */
DeleteTagsResponsePrivate::DeleteTagsResponsePrivate(
    DeleteTagsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DeleteTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTagsResponsePrivate::parseDeleteTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagsResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
