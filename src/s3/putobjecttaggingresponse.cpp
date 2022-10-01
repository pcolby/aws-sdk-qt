// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjecttaggingresponse.h"
#include "putobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectTaggingResponse
 * \brief The PutObjectTaggingResponse class provides an interace for S3 PutObjectTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectTagging
 */

/*!
 * Constructs a PutObjectTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectTaggingResponse::PutObjectTaggingResponse(
        const PutObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new PutObjectTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectTaggingRequest * PutObjectTaggingResponse::request() const
{
    Q_D(const PutObjectTaggingResponse);
    return static_cast<const PutObjectTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectTagging \a response.
 */
void PutObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectTaggingResponsePrivate
 * \brief The PutObjectTaggingResponsePrivate class provides private implementation for PutObjectTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectTaggingResponsePrivate object with public implementation \a q.
 */
PutObjectTaggingResponsePrivate::PutObjectTaggingResponsePrivate(
    PutObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectTagging response element from \a xml.
 */
void PutObjectTaggingResponsePrivate::parsePutObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
