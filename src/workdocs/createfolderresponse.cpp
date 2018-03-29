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

#include "createfolderresponse.h"
#include "createfolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  CreateFolderResponse
 *
 * @brief  Handles WorkDocs CreateFolder responses.
 *
 * @see    WorkDocsClient::createFolder
 */

/**
 * @brief  Constructs a new CreateFolderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFolderResponse::CreateFolderResponse(
        const CreateFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new CreateFolderResponsePrivate(this), parent)
{
    setRequest(new CreateFolderRequest(request));
    setReply(reply);
}

const CreateFolderRequest * CreateFolderResponse::request() const
{
    Q_D(const CreateFolderResponse);
    return static_cast<const CreateFolderRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs CreateFolder response.
 *
 * @param  response  Response to parse.
 */
void CreateFolderResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFolderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFolderResponsePrivate
 *
 * @brief  Private implementation for CreateFolderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFolderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFolderResponse instance.
 */
CreateFolderResponsePrivate::CreateFolderResponsePrivate(
    CreateFolderResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs CreateFolderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFolderResponsePrivate::parseCreateFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFolderResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
