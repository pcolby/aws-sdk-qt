// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectlockconfigurationresponse.h"
#include "putobjectlockconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectLockConfigurationResponse
 * \brief The PutObjectLockConfigurationResponse class provides an interace for S3 PutObjectLockConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectLockConfiguration
 */

/*!
 * Constructs a PutObjectLockConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectLockConfigurationResponse::PutObjectLockConfigurationResponse(
        const PutObjectLockConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectLockConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutObjectLockConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectLockConfigurationRequest * PutObjectLockConfigurationResponse::request() const
{
    Q_D(const PutObjectLockConfigurationResponse);
    return static_cast<const PutObjectLockConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectLockConfiguration \a response.
 */
void PutObjectLockConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectLockConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectLockConfigurationResponsePrivate
 * \brief The PutObjectLockConfigurationResponsePrivate class provides private implementation for PutObjectLockConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectLockConfigurationResponsePrivate object with public implementation \a q.
 */
PutObjectLockConfigurationResponsePrivate::PutObjectLockConfigurationResponsePrivate(
    PutObjectLockConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectLockConfiguration response element from \a xml.
 */
void PutObjectLockConfigurationResponsePrivate::parsePutObjectLockConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectLockConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
