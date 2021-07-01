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

#include "restoreobjectresponse.h"
#include "restoreobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::RestoreObjectResponse
 * \brief The RestoreObjectResponse class provides an interace for S3 RestoreObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::restoreObject
 */

/*!
 * Constructs a RestoreObjectResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreObjectResponse::RestoreObjectResponse(
        const RestoreObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new RestoreObjectResponsePrivate(this), parent)
{
    setRequest(new RestoreObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreObjectRequest * RestoreObjectResponse::request() const
{
    Q_D(const RestoreObjectResponse);
    return static_cast<const RestoreObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 RestoreObject \a response.
 */
void RestoreObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::RestoreObjectResponsePrivate
 * \brief The RestoreObjectResponsePrivate class provides private implementation for RestoreObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a RestoreObjectResponsePrivate object with public implementation \a q.
 */
RestoreObjectResponsePrivate::RestoreObjectResponsePrivate(
    RestoreObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 RestoreObject response element from \a xml.
 */
void RestoreObjectResponsePrivate::parseRestoreObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
