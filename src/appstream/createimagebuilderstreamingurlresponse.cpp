/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createimagebuilderstreamingurlresponse.h"
#include "createimagebuilderstreamingurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateImageBuilderStreamingURLResponse
 * \brief The CreateImageBuilderStreamingURLResponse class provides an interace for AppStream CreateImageBuilderStreamingURL responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createImageBuilderStreamingURL
 */

/*!
 * Constructs a CreateImageBuilderStreamingURLResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageBuilderStreamingURLResponse::CreateImageBuilderStreamingURLResponse(
        const CreateImageBuilderStreamingURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateImageBuilderStreamingURLResponsePrivate(this), parent)
{
    setRequest(new CreateImageBuilderStreamingURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageBuilderStreamingURLRequest * CreateImageBuilderStreamingURLResponse::request() const
{
    Q_D(const CreateImageBuilderStreamingURLResponse);
    return static_cast<const CreateImageBuilderStreamingURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CreateImageBuilderStreamingURL \a response.
 */
void CreateImageBuilderStreamingURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageBuilderStreamingURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CreateImageBuilderStreamingURLResponsePrivate
 * \brief The CreateImageBuilderStreamingURLResponsePrivate class provides private implementation for CreateImageBuilderStreamingURLResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateImageBuilderStreamingURLResponsePrivate object with public implementation \a q.
 */
CreateImageBuilderStreamingURLResponsePrivate::CreateImageBuilderStreamingURLResponsePrivate(
    CreateImageBuilderStreamingURLResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CreateImageBuilderStreamingURL response element from \a xml.
 */
void CreateImageBuilderStreamingURLResponsePrivate::parseCreateImageBuilderStreamingURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageBuilderStreamingURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
