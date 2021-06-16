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

#include "getbuckettaggingresponse.h"
#include "getbuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketTaggingResponse
 * \brief The GetBucketTaggingResponse class provides an interace for S3Control GetBucketTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketTagging
 */

/*!
 * Constructs a GetBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketTaggingResponse::GetBucketTaggingResponse(
        const GetBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new GetBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketTaggingRequest * GetBucketTaggingResponse::request() const
{
    Q_D(const GetBucketTaggingResponse);
    return static_cast<const GetBucketTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetBucketTagging \a response.
 */
void GetBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetBucketTaggingResponsePrivate
 * \brief The GetBucketTaggingResponsePrivate class provides private implementation for GetBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketTaggingResponsePrivate object with public implementation \a q.
 */
GetBucketTaggingResponsePrivate::GetBucketTaggingResponsePrivate(
    GetBucketTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetBucketTagging response element from \a xml.
 */
void GetBucketTaggingResponsePrivate::parseGetBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
