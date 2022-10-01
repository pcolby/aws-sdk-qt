// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
