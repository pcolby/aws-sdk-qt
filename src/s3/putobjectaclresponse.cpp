// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectaclresponse.h"
#include "putobjectaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectAclResponse
 * \brief The PutObjectAclResponse class provides an interace for S3 PutObjectAcl responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectAcl
 */

/*!
 * Constructs a PutObjectAclResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectAclResponse::PutObjectAclResponse(
        const PutObjectAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectAclResponsePrivate(this), parent)
{
    setRequest(new PutObjectAclRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectAclRequest * PutObjectAclResponse::request() const
{
    Q_D(const PutObjectAclResponse);
    return static_cast<const PutObjectAclRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectAcl \a response.
 */
void PutObjectAclResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectAclResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectAclResponsePrivate
 * \brief The PutObjectAclResponsePrivate class provides private implementation for PutObjectAclResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectAclResponsePrivate object with public implementation \a q.
 */
PutObjectAclResponsePrivate::PutObjectAclResponsePrivate(
    PutObjectAclResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectAcl response element from \a xml.
 */
void PutObjectAclResponsePrivate::parsePutObjectAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectAclResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
