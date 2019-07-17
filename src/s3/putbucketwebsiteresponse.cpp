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

#include "putbucketwebsiteresponse.h"
#include "putbucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketWebsiteResponse
 * \brief The PutBucketWebsiteResponse class provides an interace for S3 PutBucketWebsite responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketWebsite
 */

/*!
 * Constructs a PutBucketWebsiteResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketWebsiteResponse::PutBucketWebsiteResponse(
        const PutBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new PutBucketWebsiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketWebsiteRequest * PutBucketWebsiteResponse::request() const
{
    Q_D(const PutBucketWebsiteResponse);
    return static_cast<const PutBucketWebsiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketWebsite \a response.
 */
void PutBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketWebsiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketWebsiteResponsePrivate
 * \brief The PutBucketWebsiteResponsePrivate class provides private implementation for PutBucketWebsiteResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketWebsiteResponsePrivate object with public implementation \a q.
 */
PutBucketWebsiteResponsePrivate::PutBucketWebsiteResponsePrivate(
    PutBucketWebsiteResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketWebsite response element from \a xml.
 */
void PutBucketWebsiteResponsePrivate::parsePutBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketWebsiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
