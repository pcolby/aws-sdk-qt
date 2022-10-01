// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketinventoryconfigurationresponse.h"
#include "getbucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationResponse
 * \brief The GetBucketInventoryConfigurationResponse class provides an interace for S3 GetBucketInventoryConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketInventoryConfiguration
 */

/*!
 * Constructs a GetBucketInventoryConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketInventoryConfigurationResponse::GetBucketInventoryConfigurationResponse(
        const GetBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketInventoryConfigurationRequest * GetBucketInventoryConfigurationResponse::request() const
{
    Q_D(const GetBucketInventoryConfigurationResponse);
    return static_cast<const GetBucketInventoryConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketInventoryConfiguration \a response.
 */
void GetBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketInventoryConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationResponsePrivate
 * \brief The GetBucketInventoryConfigurationResponsePrivate class provides private implementation for GetBucketInventoryConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketInventoryConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketInventoryConfigurationResponsePrivate::GetBucketInventoryConfigurationResponsePrivate(
    GetBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketInventoryConfiguration response element from \a xml.
 */
void GetBucketInventoryConfigurationResponsePrivate::parseGetBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketInventoryConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
