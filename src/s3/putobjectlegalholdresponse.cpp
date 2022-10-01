// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectlegalholdresponse.h"
#include "putobjectlegalholdresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectLegalHoldResponse
 * \brief The PutObjectLegalHoldResponse class provides an interace for S3 PutObjectLegalHold responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectLegalHold
 */

/*!
 * Constructs a PutObjectLegalHoldResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectLegalHoldResponse::PutObjectLegalHoldResponse(
        const PutObjectLegalHoldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectLegalHoldResponsePrivate(this), parent)
{
    setRequest(new PutObjectLegalHoldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectLegalHoldRequest * PutObjectLegalHoldResponse::request() const
{
    Q_D(const PutObjectLegalHoldResponse);
    return static_cast<const PutObjectLegalHoldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectLegalHold \a response.
 */
void PutObjectLegalHoldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectLegalHoldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectLegalHoldResponsePrivate
 * \brief The PutObjectLegalHoldResponsePrivate class provides private implementation for PutObjectLegalHoldResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectLegalHoldResponsePrivate object with public implementation \a q.
 */
PutObjectLegalHoldResponsePrivate::PutObjectLegalHoldResponsePrivate(
    PutObjectLegalHoldResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectLegalHold response element from \a xml.
 */
void PutObjectLegalHoldResponsePrivate::parsePutObjectLegalHoldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectLegalHoldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
