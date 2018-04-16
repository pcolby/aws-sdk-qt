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

#include "startimagebuilderresponse.h"
#include "startimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StartImageBuilderResponse
 *
 * \brief The StartImageBuilderResponse class provides an interace for AppStream StartImageBuilder responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::startImageBuilder
 */

/*!
 * @brief  Constructs a new StartImageBuilderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartImageBuilderResponse::StartImageBuilderResponse(
        const StartImageBuilderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StartImageBuilderResponsePrivate(this), parent)
{
    setRequest(new StartImageBuilderRequest(request));
    setReply(reply);
}

const StartImageBuilderRequest * StartImageBuilderResponse::request() const
{
    Q_D(const StartImageBuilderResponse);
    return static_cast<const StartImageBuilderRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream StartImageBuilder response.
 *
 * @param  response  Response to parse.
 */
void StartImageBuilderResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartImageBuilderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartImageBuilderResponsePrivate
 *
 * \brief Private implementation for StartImageBuilderResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartImageBuilderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartImageBuilderResponse instance.
 */
StartImageBuilderResponsePrivate::StartImageBuilderResponsePrivate(
    StartImageBuilderResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream StartImageBuilderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartImageBuilderResponsePrivate::parseStartImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImageBuilderResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
