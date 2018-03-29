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

#include "updateclassifierresponse.h"
#include "updateclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateClassifierResponse
 *
 * @brief  Handles Glue UpdateClassifier responses.
 *
 * @see    GlueClient::updateClassifier
 */

/**
 * @brief  Constructs a new UpdateClassifierResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateClassifierResponse::UpdateClassifierResponse(
        const UpdateClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateClassifierResponsePrivate(this), parent)
{
    setRequest(new UpdateClassifierRequest(request));
    setReply(reply);
}

const UpdateClassifierRequest * UpdateClassifierResponse::request() const
{
    Q_D(const UpdateClassifierResponse);
    return static_cast<const UpdateClassifierRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateClassifier response.
 *
 * @param  response  Response to parse.
 */
void UpdateClassifierResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateClassifierResponsePrivate
 *
 * @brief  Private implementation for UpdateClassifierResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClassifierResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateClassifierResponse instance.
 */
UpdateClassifierResponsePrivate::UpdateClassifierResponsePrivate(
    UpdateClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateClassifierResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateClassifierResponsePrivate::parseUpdateClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClassifierResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
