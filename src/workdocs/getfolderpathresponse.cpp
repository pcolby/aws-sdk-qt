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

#include "getfolderpathresponse.h"
#include "getfolderpathresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetFolderPathResponse
 *
 * @brief  Handles WorkDocs GetFolderPath responses.
 *
 * @see    WorkDocsClient::getFolderPath
 */

/**
 * @brief  Constructs a new GetFolderPathResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFolderPathResponse::GetFolderPathResponse(
        const GetFolderPathRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetFolderPathResponse(new GetFolderPathResponsePrivate(this), parent)
{
    setRequest(new GetFolderPathRequest(request));
    setReply(reply);
}

const GetFolderPathRequest * GetFolderPathResponse::request() const
{
    Q_D(const GetFolderPathResponse);
    return static_cast<const GetFolderPathRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs GetFolderPath response.
 *
 * @param  response  Response to parse.
 */
void GetFolderPathResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFolderPathResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFolderPathResponsePrivate
 *
 * @brief  Private implementation for GetFolderPathResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFolderPathResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFolderPathResponse instance.
 */
GetFolderPathResponsePrivate::GetFolderPathResponsePrivate(
    GetFolderPathResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs GetFolderPathResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFolderPathResponsePrivate::parseGetFolderPathResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFolderPathResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
