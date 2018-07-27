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

#include "getobjectaclresponse.h"
#include "getobjectaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectAclResponse
 * \brief The GetObjectAclResponse class provides an interace for S3 GetObjectAcl responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectAcl
 */

/*!
 * Constructs a GetObjectAclResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectAclResponse::GetObjectAclResponse(
        const GetObjectAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectAclResponsePrivate(this), parent)
{
    setRequest(new GetObjectAclRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectAclRequest * GetObjectAclResponse::request() const
{
    Q_D(const GetObjectAclResponse);
    return static_cast<const GetObjectAclRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectAcl \a response.
 */
void GetObjectAclResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectAclResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectAclResponsePrivate
 * \brief The GetObjectAclResponsePrivate class provides private implementation for GetObjectAclResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectAclResponsePrivate object with public implementation \a q.
 */
GetObjectAclResponsePrivate::GetObjectAclResponsePrivate(
    GetObjectAclResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectAcl response element from \a xml.
 */
void GetObjectAclResponsePrivate::parseGetObjectAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectAclResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
