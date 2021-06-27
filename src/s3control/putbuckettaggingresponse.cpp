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

#include "putbuckettaggingresponse.h"
#include "putbuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketTaggingResponse
 * \brief The PutBucketTaggingResponse class provides an interace for S3Control PutBucketTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketTagging
 */

/*!
 * Constructs a PutBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketTaggingResponse::PutBucketTaggingResponse(
        const PutBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new PutBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketTaggingRequest * PutBucketTaggingResponse::request() const
{
    return static_cast<const PutBucketTaggingRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control PutBucketTagging \a response.
 */
void PutBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutBucketTaggingResponsePrivate
 * \brief The PutBucketTaggingResponsePrivate class provides private implementation for PutBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketTaggingResponsePrivate object with public implementation \a q.
 */
PutBucketTaggingResponsePrivate::PutBucketTaggingResponsePrivate(
    PutBucketTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutBucketTagging response element from \a xml.
 */
void PutBucketTaggingResponsePrivate::parsePutBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
