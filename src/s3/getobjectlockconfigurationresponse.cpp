// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectlockconfigurationresponse.h"
#include "getobjectlockconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectLockConfigurationResponse
 * \brief The GetObjectLockConfigurationResponse class provides an interace for S3 GetObjectLockConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectLockConfiguration
 */

/*!
 * Constructs a GetObjectLockConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectLockConfigurationResponse::GetObjectLockConfigurationResponse(
        const GetObjectLockConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectLockConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetObjectLockConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectLockConfigurationRequest * GetObjectLockConfigurationResponse::request() const
{
    Q_D(const GetObjectLockConfigurationResponse);
    return static_cast<const GetObjectLockConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectLockConfiguration \a response.
 */
void GetObjectLockConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectLockConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectLockConfigurationResponsePrivate
 * \brief The GetObjectLockConfigurationResponsePrivate class provides private implementation for GetObjectLockConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectLockConfigurationResponsePrivate object with public implementation \a q.
 */
GetObjectLockConfigurationResponsePrivate::GetObjectLockConfigurationResponsePrivate(
    GetObjectLockConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectLockConfiguration response element from \a xml.
 */
void GetObjectLockConfigurationResponsePrivate::parseGetObjectLockConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectLockConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
