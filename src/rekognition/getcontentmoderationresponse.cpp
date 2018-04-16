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

#include "getcontentmoderationresponse.h"
#include "getcontentmoderationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetContentModerationResponse
 *
 * \brief The GetContentModerationResponse class encapsulates Rekognition GetContentModeration responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getContentModeration
 */

/*!
 * @brief  Constructs a new GetContentModerationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetContentModerationResponse::GetContentModerationResponse(
        const GetContentModerationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetContentModerationResponsePrivate(this), parent)
{
    setRequest(new GetContentModerationRequest(request));
    setReply(reply);
}

const GetContentModerationRequest * GetContentModerationResponse::request() const
{
    Q_D(const GetContentModerationResponse);
    return static_cast<const GetContentModerationRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition GetContentModeration response.
 *
 * @param  response  Response to parse.
 */
void GetContentModerationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetContentModerationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetContentModerationResponsePrivate
 *
 * \brief Private implementation for GetContentModerationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetContentModerationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetContentModerationResponse instance.
 */
GetContentModerationResponsePrivate::GetContentModerationResponsePrivate(
    GetContentModerationResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition GetContentModerationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetContentModerationResponsePrivate::parseGetContentModerationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContentModerationResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
