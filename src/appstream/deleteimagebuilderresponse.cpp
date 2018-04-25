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

#include "deleteimagebuilderresponse.h"
#include "deleteimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteImageBuilderResponse
 * \brief The DeleteImageBuilderResponse class provides an interace for AppStream DeleteImageBuilder responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteImageBuilder
 */

/*!
 * Constructs a DeleteImageBuilderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImageBuilderResponse::DeleteImageBuilderResponse(
        const DeleteImageBuilderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteImageBuilderResponsePrivate(this), parent)
{
    setRequest(new DeleteImageBuilderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImageBuilderRequest * DeleteImageBuilderResponse::request() const
{
    Q_D(const DeleteImageBuilderResponse);
    return static_cast<const DeleteImageBuilderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DeleteImageBuilder \a response.
 */
void DeleteImageBuilderResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteImageBuilderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DeleteImageBuilderResponsePrivate
 * \brief The DeleteImageBuilderResponsePrivate class provides private implementation for DeleteImageBuilderResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteImageBuilderResponsePrivate object with public implementation \a q.
 */
DeleteImageBuilderResponsePrivate::DeleteImageBuilderResponsePrivate(
    DeleteImageBuilderResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DeleteImageBuilder response element from \a xml.
 */
void DeleteImageBuilderResponsePrivate::parseDeleteImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImageBuilderResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
