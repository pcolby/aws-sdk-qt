/*
    Copyright 2013-2018 Paul Colby

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

#include "headobjectresponse.h"
#include "headobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadObjectResponse
 * \brief The HeadObjectResponse class provides an interace for S3 HeadObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headObject
 */

/*!
 * Constructs a HeadObjectResponse object for \a reply to \a request, with parent \a parent.
 */
HeadObjectResponse::HeadObjectResponse(
        const HeadObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new HeadObjectResponsePrivate(this), parent)
{
    setRequest(new HeadObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const HeadObjectRequest * HeadObjectResponse::request() const
{
    Q_D(const HeadObjectResponse);
    return static_cast<const HeadObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 HeadObject \a response.
 */
void HeadObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(HeadObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::HeadObjectResponsePrivate
 * \brief The HeadObjectResponsePrivate class provides private implementation for HeadObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadObjectResponsePrivate object with public implementation \a q.
 */
HeadObjectResponsePrivate::HeadObjectResponsePrivate(
    HeadObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 HeadObject response element from \a xml.
 */
void HeadObjectResponsePrivate::parseHeadObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("HeadObjectResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
