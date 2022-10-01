// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketintelligenttieringconfigurationresponse.h"
#include "getbucketintelligenttieringconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketIntelligentTieringConfigurationResponse
 * \brief The GetBucketIntelligentTieringConfigurationResponse class provides an interace for S3 GetBucketIntelligentTieringConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a GetBucketIntelligentTieringConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketIntelligentTieringConfigurationResponse::GetBucketIntelligentTieringConfigurationResponse(
        const GetBucketIntelligentTieringConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketIntelligentTieringConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketIntelligentTieringConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketIntelligentTieringConfigurationRequest * GetBucketIntelligentTieringConfigurationResponse::request() const
{
    Q_D(const GetBucketIntelligentTieringConfigurationResponse);
    return static_cast<const GetBucketIntelligentTieringConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketIntelligentTieringConfiguration \a response.
 */
void GetBucketIntelligentTieringConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketIntelligentTieringConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketIntelligentTieringConfigurationResponsePrivate
 * \brief The GetBucketIntelligentTieringConfigurationResponsePrivate class provides private implementation for GetBucketIntelligentTieringConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketIntelligentTieringConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketIntelligentTieringConfigurationResponsePrivate::GetBucketIntelligentTieringConfigurationResponsePrivate(
    GetBucketIntelligentTieringConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketIntelligentTieringConfiguration response element from \a xml.
 */
void GetBucketIntelligentTieringConfigurationResponsePrivate::parseGetBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketIntelligentTieringConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
