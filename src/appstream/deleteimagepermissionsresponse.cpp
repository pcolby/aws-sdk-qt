/*
    Copyright 2013-2021 Paul Colby

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
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
