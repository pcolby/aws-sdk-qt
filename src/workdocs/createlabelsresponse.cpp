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

#include "createlabelsresponse.h"
#include "createlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  CreateLabelsResponse
 *
 * @brief  Handles WorkDocs CreateLabels responses.
 *
 * @see    WorkDocsClient::createLabels
 */

/**
 * @brief  Constructs a new CreateLabelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLabelsResponse::CreateLabelsResponse(
        const CreateLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new CreateLabelsResponsePrivate(this), parent)
{
    setRequest(new CreateLabelsRequest(request));
    setReply(reply);
}

const CreateLabelsRequest * CreateLabelsResponse::request() const
{
    Q_D(const CreateLabelsResponse);
    return static_cast<const CreateLabelsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs CreateLabels response.
 *
 * @param  response  Response to parse.
 */
void CreateLabelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLabelsResponsePrivate
 *
 * @brief  Private implementation for CreateLabelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLabelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLabelsResponse instance.
 */
CreateLabelsResponsePrivate::CreateLabelsResponsePrivate(
    CreateLabelsQueueResponse * const q) : CreateLabelsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs CreateLabelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLabelsResponsePrivate::CreateLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLabelsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
