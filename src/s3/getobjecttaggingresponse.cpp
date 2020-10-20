/*
    Copyright 2013-2020 Paul Colby

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

#include "getobjecttaggingresponse.h"
#include "getobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTaggingResponse
 * \brief The GetObjectTaggingResponse class provides an interace for S3 GetObjectTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTagging
 */

/*!
 * Constructs a GetObjectTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectTaggingResponse::GetObjectTaggingResponse(
        const GetObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new GetObjectTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectTaggingRequest * GetObjectTaggingResponse::request() const
{
    Q_D(const GetObjectTaggingResponse);
    return static_cast<const GetObjectTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectTagging \a response.
 */
void GetObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectTaggingResponsePrivate
 * \brief The GetObjectTaggingResponsePrivate class provides private implementation for GetObjectTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTaggingResponsePrivate object with public implementation \a q.
 */
GetObjectTaggingResponsePrivate::GetObjectTaggingResponsePrivate(
    GetObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectTagging response element from \a xml.
 */
void GetObjectTaggingResponsePrivate::parseGetObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
