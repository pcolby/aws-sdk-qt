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

#include "deletebuckettaggingresponse.h"
#include "deletebuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketTaggingResponse
 * \brief The DeleteBucketTaggingResponse class provides an interace for S3Control DeleteBucketTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketTagging
 */

/*!
 * Constructs a DeleteBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketTaggingResponse::DeleteBucketTaggingResponse(
        const DeleteBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketTaggingRequest * DeleteBucketTaggingResponse::request() const
{
    Q_D(const DeleteBucketTaggingResponse);
    return static_cast<const DeleteBucketTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteBucketTagging \a response.
 */
void DeleteBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteBucketTaggingResponsePrivate
 * \brief The DeleteBucketTaggingResponsePrivate class provides private implementation for DeleteBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketTaggingResponsePrivate object with public implementation \a q.
 */
DeleteBucketTaggingResponsePrivate::DeleteBucketTaggingResponsePrivate(
    DeleteBucketTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteBucketTagging response element from \a xml.
 */
void DeleteBucketTaggingResponsePrivate::parseDeleteBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
