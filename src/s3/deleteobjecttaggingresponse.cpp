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

#include "deleteobjecttaggingresponse.h"
#include "deleteobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectTaggingResponse
 * \brief The DeleteObjectTaggingResponse class provides an interace for S3 DeleteObjectTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjectTagging
 */

/*!
 * Constructs a DeleteObjectTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectTaggingResponse::DeleteObjectTaggingResponse(
        const DeleteObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectTaggingRequest * DeleteObjectTaggingResponse::request() const
{
    Q_D(const DeleteObjectTaggingResponse);
    return static_cast<const DeleteObjectTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteObjectTagging \a response.
 */
void DeleteObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteObjectTaggingResponsePrivate
 * \brief The DeleteObjectTaggingResponsePrivate class provides private implementation for DeleteObjectTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectTaggingResponsePrivate object with public implementation \a q.
 */
DeleteObjectTaggingResponsePrivate::DeleteObjectTaggingResponsePrivate(
    DeleteObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteObjectTagging response element from \a xml.
 */
void DeleteObjectTaggingResponsePrivate::parseDeleteObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
