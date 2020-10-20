/*
    Copyright 2013-2020 Paul Colby

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
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::GetObjectResponse
 * \brief The GetObjectResponse class provides an interace for MediaStoreData GetObject responses.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::getObject
 */

/*!
 * Constructs a GetObjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectResponse::GetObjectResponse(
        const GetObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new GetObjectResponsePrivate(this), parent)
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
 * Parses a successful MediaStoreData GetObject \a response.
 */
void GetObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStoreData::GetObjectResponsePrivate
 * \brief The GetObjectResponsePrivate class provides private implementation for GetObjectResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a GetObjectResponsePrivate object with public implementation \a q.
 */
GetObjectResponsePrivate::GetObjectResponsePrivate(
    GetObjectResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/*!
 * Parses a MediaStoreData GetObject response element from \a xml.
 */
void GetObjectResponsePrivate::parseGetObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStoreData
} // namespace QtAws
