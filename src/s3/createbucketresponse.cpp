// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbucketresponse.h"
#include "createbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CreateBucketResponse
 * \brief The CreateBucketResponse class provides an interace for S3 CreateBucket responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::createBucket
 */

/*!
 * Constructs a CreateBucketResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBucketResponse::CreateBucketResponse(
        const CreateBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CreateBucketResponsePrivate(this), parent)
{
    setRequest(new CreateBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBucketRequest * CreateBucketResponse::request() const
{
    Q_D(const CreateBucketResponse);
    return static_cast<const CreateBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 CreateBucket \a response.
 */
void CreateBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::CreateBucketResponsePrivate
 * \brief The CreateBucketResponsePrivate class provides private implementation for CreateBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CreateBucketResponsePrivate object with public implementation \a q.
 */
CreateBucketResponsePrivate::CreateBucketResponsePrivate(
    CreateBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 CreateBucket response element from \a xml.
 */
void CreateBucketResponsePrivate::parseCreateBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
