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

#include "deleteclassifierresponse.h"
#include "deleteclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  DeleteClassifierResponse
 *
 * @brief  Handles Glue DeleteClassifier responses.
 *
 * @see    GlueClient::deleteClassifier
 */

/**
 * @brief  Constructs a new DeleteClassifierResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClassifierResponse::DeleteClassifierResponse(
        const DeleteClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteClassifierResponse(new DeleteClassifierResponsePrivate(this), parent)
{
    setRequest(new DeleteClassifierRequest(request));
    setReply(reply);
}

const DeleteClassifierRequest * DeleteClassifierResponse::request() const
{
    Q_D(const DeleteClassifierResponse);
    return static_cast<const DeleteClassifierRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteClassifier response.
 *
 * @param  response  Response to parse.
 */
void DeleteClassifierResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClassifierResponsePrivate
 *
 * @brief  Private implementation for DeleteClassifierResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClassifierResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClassifierResponse instance.
 */
DeleteClassifierResponsePrivate::DeleteClassifierResponsePrivate(
    DeleteClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteClassifierResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClassifierResponsePrivate::parseDeleteClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClassifierResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
