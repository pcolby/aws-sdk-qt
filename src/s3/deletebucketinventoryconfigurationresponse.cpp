// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketinventoryconfigurationresponse.h"
#include "deletebucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketInventoryConfigurationResponse
 * \brief The DeleteBucketInventoryConfigurationResponse class provides an interace for S3 DeleteBucketInventoryConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketInventoryConfiguration
 */

/*!
 * Constructs a DeleteBucketInventoryConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketInventoryConfigurationResponse::DeleteBucketInventoryConfigurationResponse(
        const DeleteBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketInventoryConfigurationRequest * DeleteBucketInventoryConfigurationResponse::request() const
{
    Q_D(const DeleteBucketInventoryConfigurationResponse);
    return static_cast<const DeleteBucketInventoryConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketInventoryConfiguration \a response.
 */
void DeleteBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketInventoryConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketInventoryConfigurationResponsePrivate
 * \brief The DeleteBucketInventoryConfigurationResponsePrivate class provides private implementation for DeleteBucketInventoryConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketInventoryConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBucketInventoryConfigurationResponsePrivate::DeleteBucketInventoryConfigurationResponsePrivate(
    DeleteBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketInventoryConfiguration response element from \a xml.
 */
void DeleteBucketInventoryConfigurationResponsePrivate::parseDeleteBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketInventoryConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
