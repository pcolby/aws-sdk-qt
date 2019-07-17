/*
    Copyright 2013-2019 Paul Colby

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

#include "getpublicaccessblockresponse.h"
#include "getpublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetPublicAccessBlockResponse
 * \brief The GetPublicAccessBlockResponse class provides an interace for S3 GetPublicAccessBlock responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getPublicAccessBlock
 */

/*!
 * Constructs a GetPublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicAccessBlockResponse::GetPublicAccessBlockResponse(
        const GetPublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetPublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new GetPublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicAccessBlockRequest * GetPublicAccessBlockResponse::request() const
{
    Q_D(const GetPublicAccessBlockResponse);
    return static_cast<const GetPublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetPublicAccessBlock \a response.
 */
void GetPublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetPublicAccessBlockResponsePrivate
 * \brief The GetPublicAccessBlockResponsePrivate class provides private implementation for GetPublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetPublicAccessBlockResponsePrivate object with public implementation \a q.
 */
GetPublicAccessBlockResponsePrivate::GetPublicAccessBlockResponsePrivate(
    GetPublicAccessBlockResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetPublicAccessBlock response element from \a xml.
 */
void GetPublicAccessBlockResponsePrivate::parseGetPublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
