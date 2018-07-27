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

#include "describeimagepermissionsresponse.h"
#include "describeimagepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImagePermissionsResponse
 * \brief The DescribeImagePermissionsResponse class provides an interace for AppStream DescribeImagePermissions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeImagePermissions
 */

/*!
 * Constructs a DescribeImagePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImagePermissionsResponse::DescribeImagePermissionsResponse(
        const DescribeImagePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeImagePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeImagePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImagePermissionsRequest * DescribeImagePermissionsResponse::request() const
{
    Q_D(const DescribeImagePermissionsResponse);
    return static_cast<const DescribeImagePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeImagePermissions \a response.
 */
void DescribeImagePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImagePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeImagePermissionsResponsePrivate
 * \brief The DescribeImagePermissionsResponsePrivate class provides private implementation for DescribeImagePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeImagePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeImagePermissionsResponsePrivate::DescribeImagePermissionsResponsePrivate(
    DescribeImagePermissionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeImagePermissions response element from \a xml.
 */
void DescribeImagePermissionsResponsePrivate::parseDescribeImagePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImagePermissionsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
