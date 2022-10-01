// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CopyObjectResponse);
    return static_cast<const CopyObjectRequest *>(d->request);
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
