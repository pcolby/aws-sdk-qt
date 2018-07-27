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

#include "updateimagepermissionsresponse.h"
#include "updateimagepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::UpdateImagePermissionsResponse
 * \brief The UpdateImagePermissionsResponse class provides an interace for AppStream UpdateImagePermissions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::updateImagePermissions
 */

/*!
 * Constructs a UpdateImagePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateImagePermissionsResponse::UpdateImagePermissionsResponse(
        const UpdateImagePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new UpdateImagePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateImagePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateImagePermissionsRequest * UpdateImagePermissionsResponse::request() const
{
    Q_D(const UpdateImagePermissionsResponse);
    return static_cast<const UpdateImagePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream UpdateImagePermissions \a response.
 */
void UpdateImagePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateImagePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::UpdateImagePermissionsResponsePrivate
 * \brief The UpdateImagePermissionsResponsePrivate class provides private implementation for UpdateImagePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a UpdateImagePermissionsResponsePrivate object with public implementation \a q.
 */
UpdateImagePermissionsResponsePrivate::UpdateImagePermissionsResponsePrivate(
    UpdateImagePermissionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream UpdateImagePermissions response element from \a xml.
 */
void UpdateImagePermissionsResponsePrivate::parseUpdateImagePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateImagePermissionsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
