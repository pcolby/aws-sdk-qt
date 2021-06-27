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

#include "copyobjectresponse.h"
#include "copyobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CopyObjectResponse
 * \brief The CopyObjectResponse class provides an interace for S3 CopyObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::copyObject
 */

/*!
 * Constructs a CopyObjectResponse object for \a reply to \a request, with parent \a parent.
 */
CopyObjectResponse::CopyObjectResponse(
        const CopyObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CopyObjectResponsePrivate(this), parent)
{
    setRequest(new CopyObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyObjectRequest * CopyObjectResponse::request() const
{
    return static_cast<const CopyObjectRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 CopyObject \a response.
 */
void CopyObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::CopyObjectResponsePrivate
 * \brief The CopyObjectResponsePrivate class provides private implementation for CopyObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CopyObjectResponsePrivate object with public implementation \a q.
 */
CopyObjectResponsePrivate::CopyObjectResponsePrivate(
    CopyObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 CopyObject response element from \a xml.
 */
void CopyObjectResponsePrivate::parseCopyObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
