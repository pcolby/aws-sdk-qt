/*
    Copyright 2013-2019 Paul Colby

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

#include "getobjectresponse.h"
#include "getobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectResponse
 * \brief The GetObjectResponse class provides an interace for S3 GetObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObject
 */

/*!
 * Constructs a GetObjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectResponse::GetObjectResponse(
        const GetObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectResponsePrivate(this), parent)
{
    setRequest(new GetObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectRequest * GetObjectResponse::request() const
{
    Q_D(const GetObjectResponse);
    return static_cast<const GetObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObject \a response.
 */
void GetObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectResponsePrivate
 * \brief The GetObjectResponsePrivate class provides private implementation for GetObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectResponsePrivate object with public implementation \a q.
 */
GetObjectResponsePrivate::GetObjectResponsePrivate(
    GetObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObject response element from \a xml.
 */
void GetObjectResponsePrivate::parseGetObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
