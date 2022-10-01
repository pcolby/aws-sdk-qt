// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectresponse.h"
#include "putobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectResponse
 * \brief The PutObjectResponse class provides an interace for S3 PutObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObject
 */

/*!
 * Constructs a PutObjectResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectResponse::PutObjectResponse(
        const PutObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectResponsePrivate(this), parent)
{
    setRequest(new PutObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectRequest * PutObjectResponse::request() const
{
    Q_D(const PutObjectResponse);
    return static_cast<const PutObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObject \a response.
 */
void PutObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectResponsePrivate
 * \brief The PutObjectResponsePrivate class provides private implementation for PutObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectResponsePrivate object with public implementation \a q.
 */
PutObjectResponsePrivate::PutObjectResponsePrivate(
    PutObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObject response element from \a xml.
 */
void PutObjectResponsePrivate::parsePutObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
