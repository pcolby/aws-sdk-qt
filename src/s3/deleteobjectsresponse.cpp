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

#include "deleteobjectsresponse.h"
#include "deleteobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectsResponse
 * \brief The DeleteObjectsResponse class provides an interace for S3 DeleteObjects responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjects
 */

/*!
 * Constructs a DeleteObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectsResponse::DeleteObjectsResponse(
        const DeleteObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteObjectsResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectsRequest * DeleteObjectsResponse::request() const
{
    return static_cast<const DeleteObjectsRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 DeleteObjects \a response.
 */
void DeleteObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteObjectsResponsePrivate
 * \brief The DeleteObjectsResponsePrivate class provides private implementation for DeleteObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectsResponsePrivate object with public implementation \a q.
 */
DeleteObjectsResponsePrivate::DeleteObjectsResponsePrivate(
    DeleteObjectsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteObjects response element from \a xml.
 */
void DeleteObjectsResponsePrivate::parseDeleteObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
