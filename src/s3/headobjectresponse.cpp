// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "headobjectresponse.h"
#include "headobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadObjectResponse
 * \brief The HeadObjectResponse class provides an interace for S3 HeadObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headObject
 */

/*!
 * Constructs a HeadObjectResponse object for \a reply to \a request, with parent \a parent.
 */
HeadObjectResponse::HeadObjectResponse(
        const HeadObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new HeadObjectResponsePrivate(this), parent)
{
    setRequest(new HeadObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const HeadObjectRequest * HeadObjectResponse::request() const
{
    Q_D(const HeadObjectResponse);
    return static_cast<const HeadObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 HeadObject \a response.
 */
void HeadObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(HeadObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::HeadObjectResponsePrivate
 * \brief The HeadObjectResponsePrivate class provides private implementation for HeadObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadObjectResponsePrivate object with public implementation \a q.
 */
HeadObjectResponsePrivate::HeadObjectResponsePrivate(
    HeadObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 HeadObject response element from \a xml.
 */
void HeadObjectResponsePrivate::parseHeadObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("HeadObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
