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

#include "getobjectlegalholdresponse.h"
#include "getobjectlegalholdresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectLegalHoldResponse
 * \brief The GetObjectLegalHoldResponse class provides an interace for S3 GetObjectLegalHold responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectLegalHold
 */

/*!
 * Constructs a GetObjectLegalHoldResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectLegalHoldResponse::GetObjectLegalHoldResponse(
        const GetObjectLegalHoldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectLegalHoldResponsePrivate(this), parent)
{
    setRequest(new GetObjectLegalHoldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectLegalHoldRequest * GetObjectLegalHoldResponse::request() const
{
    Q_D(const GetObjectLegalHoldResponse);
    return static_cast<const GetObjectLegalHoldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectLegalHold \a response.
 */
void GetObjectLegalHoldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectLegalHoldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectLegalHoldResponsePrivate
 * \brief The GetObjectLegalHoldResponsePrivate class provides private implementation for GetObjectLegalHoldResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectLegalHoldResponsePrivate object with public implementation \a q.
 */
GetObjectLegalHoldResponsePrivate::GetObjectLegalHoldResponsePrivate(
    GetObjectLegalHoldResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectLegalHold response element from \a xml.
 */
void GetObjectLegalHoldResponsePrivate::parseGetObjectLegalHoldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectLegalHoldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
