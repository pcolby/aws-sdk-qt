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

#include "deleteimagepermissionsresponse.h"
#include "deleteimagepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteImagePermissionsResponse
 * \brief The DeleteImagePermissionsResponse class provides an interace for AppStream DeleteImagePermissions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteImagePermissions
 */

/*!
 * Constructs a DeleteImagePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImagePermissionsResponse::DeleteImagePermissionsResponse(
        const DeleteImagePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteImagePermissionsResponsePrivate(this), parent)
{
    setRequest(new DeleteImagePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImagePermissionsRequest * DeleteImagePermissionsResponse::request() const
{
    Q_D(const DeleteImagePermissionsResponse);
    return static_cast<const DeleteImagePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DeleteImagePermissions \a response.
 */
void DeleteImagePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImagePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DeleteImagePermissionsResponsePrivate
 * \brief The DeleteImagePermissionsResponsePrivate class provides private implementation for DeleteImagePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteImagePermissionsResponsePrivate object with public implementation \a q.
 */
DeleteImagePermissionsResponsePrivate::DeleteImagePermissionsResponsePrivate(
    DeleteImagePermissionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DeleteImagePermissions response element from \a xml.
 */
void DeleteImagePermissionsResponsePrivate::parseDeleteImagePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImagePermissionsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
