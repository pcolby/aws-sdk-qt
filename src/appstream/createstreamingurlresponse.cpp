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

#include "createstreamingurlresponse.h"
#include "createstreamingurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateStreamingURLResponse
 *
 * \brief The CreateStreamingURLResponse class encapsulates AppStream CreateStreamingURL responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createStreamingURL
 */

/*!
 * @brief  Constructs a new CreateStreamingURLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamingURLResponse::CreateStreamingURLResponse(
        const CreateStreamingURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateStreamingURLResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingURLRequest(request));
    setReply(reply);
}

const CreateStreamingURLRequest * CreateStreamingURLResponse::request() const
{
    Q_D(const CreateStreamingURLResponse);
    return static_cast<const CreateStreamingURLRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream CreateStreamingURL response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamingURLResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateStreamingURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateStreamingURLResponsePrivate
 *
 * \brief Private implementation for CreateStreamingURLResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamingURLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamingURLResponse instance.
 */
CreateStreamingURLResponsePrivate::CreateStreamingURLResponsePrivate(
    CreateStreamingURLResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream CreateStreamingURLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamingURLResponsePrivate::parseCreateStreamingURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingURLResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
