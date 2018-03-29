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

#include "getfileuploadurlresponse.h"
#include "getfileuploadurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  GetFileUploadURLResponse
 *
 * @brief  Handles MTurk GetFileUploadURL responses.
 *
 * @see    MTurkClient::getFileUploadURL
 */

/**
 * @brief  Constructs a new GetFileUploadURLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFileUploadURLResponse::GetFileUploadURLResponse(
        const GetFileUploadURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetFileUploadURLResponsePrivate(this), parent)
{
    setRequest(new GetFileUploadURLRequest(request));
    setReply(reply);
}

const GetFileUploadURLRequest * GetFileUploadURLResponse::request() const
{
    Q_D(const GetFileUploadURLResponse);
    return static_cast<const GetFileUploadURLRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk GetFileUploadURL response.
 *
 * @param  response  Response to parse.
 */
void GetFileUploadURLResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFileUploadURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFileUploadURLResponsePrivate
 *
 * @brief  Private implementation for GetFileUploadURLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFileUploadURLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFileUploadURLResponse instance.
 */
GetFileUploadURLResponsePrivate::GetFileUploadURLResponsePrivate(
    GetFileUploadURLResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk GetFileUploadURLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFileUploadURLResponsePrivate::parseGetFileUploadURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFileUploadURLResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
