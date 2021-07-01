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
