// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLifecycleConfigurationResponse
 * \brief The PutBucketLifecycleConfigurationResponse class provides an interace for S3 PutBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLifecycleConfiguration
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketLifecycleConfigurationResponse::PutBucketLifecycleConfigurationResponse(
        const PutBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketLifecycleConfigurationRequest * PutBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const PutBucketLifecycleConfigurationResponse);
    return static_cast<const PutBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketLifecycleConfiguration \a response.
 */
void PutBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketLifecycleConfigurationResponsePrivate
 * \brief The PutBucketLifecycleConfigurationResponsePrivate class provides private implementation for PutBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketLifecycleConfigurationResponsePrivate::PutBucketLifecycleConfigurationResponsePrivate(
    PutBucketLifecycleConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketLifecycleConfiguration response element from \a xml.
 */
void PutBucketLifecycleConfigurationResponsePrivate::parsePutBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
