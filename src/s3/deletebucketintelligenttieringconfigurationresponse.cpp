// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketintelligenttieringconfigurationresponse.h"
#include "deletebucketintelligenttieringconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketIntelligentTieringConfigurationResponse
 * \brief The DeleteBucketIntelligentTieringConfigurationResponse class provides an interace for S3 DeleteBucketIntelligentTieringConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a DeleteBucketIntelligentTieringConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketIntelligentTieringConfigurationResponse::DeleteBucketIntelligentTieringConfigurationResponse(
        const DeleteBucketIntelligentTieringConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketIntelligentTieringConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketIntelligentTieringConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketIntelligentTieringConfigurationRequest * DeleteBucketIntelligentTieringConfigurationResponse::request() const
{
    Q_D(const DeleteBucketIntelligentTieringConfigurationResponse);
    return static_cast<const DeleteBucketIntelligentTieringConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketIntelligentTieringConfiguration \a response.
 */
void DeleteBucketIntelligentTieringConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketIntelligentTieringConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketIntelligentTieringConfigurationResponsePrivate
 * \brief The DeleteBucketIntelligentTieringConfigurationResponsePrivate class provides private implementation for DeleteBucketIntelligentTieringConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketIntelligentTieringConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBucketIntelligentTieringConfigurationResponsePrivate::DeleteBucketIntelligentTieringConfigurationResponsePrivate(
    DeleteBucketIntelligentTieringConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketIntelligentTieringConfiguration response element from \a xml.
 */
void DeleteBucketIntelligentTieringConfigurationResponsePrivate::parseDeleteBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketIntelligentTieringConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
