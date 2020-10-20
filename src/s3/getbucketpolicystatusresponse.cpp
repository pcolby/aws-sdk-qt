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

#include "getbucketpolicystatusresponse.h"
#include "getbucketpolicystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketPolicyStatusResponse
 * \brief The GetBucketPolicyStatusResponse class provides an interace for S3 GetBucketPolicyStatus responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketPolicyStatus
 */

/*!
 * Constructs a GetBucketPolicyStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketPolicyStatusResponse::GetBucketPolicyStatusResponse(
        const GetBucketPolicyStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketPolicyStatusResponsePrivate(this), parent)
{
    setRequest(new GetBucketPolicyStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketPolicyStatusRequest * GetBucketPolicyStatusResponse::request() const
{
    Q_D(const GetBucketPolicyStatusResponse);
    return static_cast<const GetBucketPolicyStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketPolicyStatus \a response.
 */
void GetBucketPolicyStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketPolicyStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketPolicyStatusResponsePrivate
 * \brief The GetBucketPolicyStatusResponsePrivate class provides private implementation for GetBucketPolicyStatusResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketPolicyStatusResponsePrivate object with public implementation \a q.
 */
GetBucketPolicyStatusResponsePrivate::GetBucketPolicyStatusResponsePrivate(
    GetBucketPolicyStatusResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketPolicyStatus response element from \a xml.
 */
void GetBucketPolicyStatusResponsePrivate::parseGetBucketPolicyStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketPolicyStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
