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

#include "putfileresponse.h"
#include "putfileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  PutFileResponse
 *
 * @brief  Handles CodeCommit PutFile responses.
 *
 * @see    CodeCommitClient::putFile
 */

/**
 * @brief  Constructs a new PutFileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutFileResponse::PutFileResponse(
        const PutFileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutFileResponse(new PutFileResponsePrivate(this), parent)
{
    setRequest(new PutFileRequest(request));
    setReply(reply);
}

const PutFileRequest * PutFileResponse::request() const
{
    Q_D(const PutFileResponse);
    return static_cast<const PutFileRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit PutFile response.
 *
 * @param  response  Response to parse.
 */
void PutFileResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutFileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutFileResponsePrivate
 *
 * @brief  Private implementation for PutFileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutFileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutFileResponse instance.
 */
PutFileResponsePrivate::PutFileResponsePrivate(
    PutFileResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit PutFileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutFileResponsePrivate::parsePutFileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFileResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
