// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationResponse
 * \brief The GetBucketLifecycleConfigurationResponse class provides an interace for S3 GetBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLifecycleConfiguration
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLifecycleConfigurationResponse::GetBucketLifecycleConfigurationResponse(
        const GetBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLifecycleConfigurationRequest * GetBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const GetBucketLifecycleConfigurationResponse);
    return static_cast<const GetBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLifecycleConfiguration \a response.
 */
void GetBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationResponsePrivate
 * \brief The GetBucketLifecycleConfigurationResponsePrivate class provides private implementation for GetBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketLifecycleConfigurationResponsePrivate::GetBucketLifecycleConfigurationResponsePrivate(
    GetBucketLifecycleConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLifecycleConfiguration response element from \a xml.
 */
void GetBucketLifecycleConfigurationResponsePrivate::parseGetBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
