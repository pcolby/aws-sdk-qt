// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketintelligenttieringconfigurationresponse.h"
#include "putbucketintelligenttieringconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketIntelligentTieringConfigurationResponse
 * \brief The PutBucketIntelligentTieringConfigurationResponse class provides an interace for S3 PutBucketIntelligentTieringConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a PutBucketIntelligentTieringConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketIntelligentTieringConfigurationResponse::PutBucketIntelligentTieringConfigurationResponse(
        const PutBucketIntelligentTieringConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketIntelligentTieringConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketIntelligentTieringConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketIntelligentTieringConfigurationRequest * PutBucketIntelligentTieringConfigurationResponse::request() const
{
    Q_D(const PutBucketIntelligentTieringConfigurationResponse);
    return static_cast<const PutBucketIntelligentTieringConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketIntelligentTieringConfiguration \a response.
 */
void PutBucketIntelligentTieringConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketIntelligentTieringConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketIntelligentTieringConfigurationResponsePrivate
 * \brief The PutBucketIntelligentTieringConfigurationResponsePrivate class provides private implementation for PutBucketIntelligentTieringConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketIntelligentTieringConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketIntelligentTieringConfigurationResponsePrivate::PutBucketIntelligentTieringConfigurationResponsePrivate(
    PutBucketIntelligentTieringConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketIntelligentTieringConfiguration response element from \a xml.
 */
void PutBucketIntelligentTieringConfigurationResponsePrivate::parsePutBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketIntelligentTieringConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
