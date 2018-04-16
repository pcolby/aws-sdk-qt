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

#include "createdirectoryconfigresponse.h"
#include "createdirectoryconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateDirectoryConfigResponse
 *
 * \brief The CreateDirectoryConfigResponse class provides an interace for AppStream CreateDirectoryConfig responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createDirectoryConfig
 */

/*!
 * @brief  Constructs a new CreateDirectoryConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectoryConfigResponse::CreateDirectoryConfigResponse(
        const CreateDirectoryConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateDirectoryConfigResponsePrivate(this), parent)
{
    setRequest(new CreateDirectoryConfigRequest(request));
    setReply(reply);
}

const CreateDirectoryConfigRequest * CreateDirectoryConfigResponse::request() const
{
    Q_D(const CreateDirectoryConfigResponse);
    return static_cast<const CreateDirectoryConfigRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream CreateDirectoryConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateDirectoryConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDirectoryConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDirectoryConfigResponsePrivate
 *
 * \brief Private implementation for CreateDirectoryConfigResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDirectoryConfigResponse instance.
 */
CreateDirectoryConfigResponsePrivate::CreateDirectoryConfigResponsePrivate(
    CreateDirectoryConfigResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream CreateDirectoryConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDirectoryConfigResponsePrivate::parseCreateDirectoryConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectoryConfigResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
