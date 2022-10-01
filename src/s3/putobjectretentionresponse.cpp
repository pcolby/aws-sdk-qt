// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectretentionresponse.h"
#include "putobjectretentionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectRetentionResponse
 * \brief The PutObjectRetentionResponse class provides an interace for S3 PutObjectRetention responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectRetention
 */

/*!
 * Constructs a PutObjectRetentionResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectRetentionResponse::PutObjectRetentionResponse(
        const PutObjectRetentionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectRetentionResponsePrivate(this), parent)
{
    setRequest(new PutObjectRetentionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectRetentionRequest * PutObjectRetentionResponse::request() const
{
    Q_D(const PutObjectRetentionResponse);
    return static_cast<const PutObjectRetentionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutObjectRetention \a response.
 */
void PutObjectRetentionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectRetentionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutObjectRetentionResponsePrivate
 * \brief The PutObjectRetentionResponsePrivate class provides private implementation for PutObjectRetentionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectRetentionResponsePrivate object with public implementation \a q.
 */
PutObjectRetentionResponsePrivate::PutObjectRetentionResponsePrivate(
    PutObjectRetentionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutObjectRetention response element from \a xml.
 */
void PutObjectRetentionResponsePrivate::parsePutObjectRetentionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectRetentionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
