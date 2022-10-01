// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketaccelerateconfigurationresponse.h"
#include "putbucketaccelerateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationResponse
 * \brief The PutBucketAccelerateConfigurationResponse class provides an interace for S3 PutBucketAccelerateConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAccelerateConfiguration
 */

/*!
 * Constructs a PutBucketAccelerateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketAccelerateConfigurationResponse::PutBucketAccelerateConfigurationResponse(
        const PutBucketAccelerateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAccelerateConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketAccelerateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketAccelerateConfigurationRequest * PutBucketAccelerateConfigurationResponse::request() const
{
    Q_D(const PutBucketAccelerateConfigurationResponse);
    return static_cast<const PutBucketAccelerateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketAccelerateConfiguration \a response.
 */
void PutBucketAccelerateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketAccelerateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationResponsePrivate
 * \brief The PutBucketAccelerateConfigurationResponsePrivate class provides private implementation for PutBucketAccelerateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAccelerateConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketAccelerateConfigurationResponsePrivate::PutBucketAccelerateConfigurationResponsePrivate(
    PutBucketAccelerateConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketAccelerateConfiguration response element from \a xml.
 */
void PutBucketAccelerateConfigurationResponsePrivate::parsePutBucketAccelerateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAccelerateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
