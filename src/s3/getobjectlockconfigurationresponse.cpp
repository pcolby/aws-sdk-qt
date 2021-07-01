/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
