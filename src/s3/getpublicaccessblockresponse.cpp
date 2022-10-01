// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpublicaccessblockresponse.h"
#include "getpublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetPublicAccessBlockResponse
 * \brief The GetPublicAccessBlockResponse class provides an interace for S3 GetPublicAccessBlock responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getPublicAccessBlock
 */

/*!
 * Constructs a GetPublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicAccessBlockResponse::GetPublicAccessBlockResponse(
        const GetPublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetPublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new GetPublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicAccessBlockRequest * GetPublicAccessBlockResponse::request() const
{
    Q_D(const GetPublicAccessBlockResponse);
    return static_cast<const GetPublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetPublicAccessBlock \a response.
 */
void GetPublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetPublicAccessBlockResponsePrivate
 * \brief The GetPublicAccessBlockResponsePrivate class provides private implementation for GetPublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetPublicAccessBlockResponsePrivate object with public implementation \a q.
 */
GetPublicAccessBlockResponsePrivate::GetPublicAccessBlockResponsePrivate(
    GetPublicAccessBlockResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetPublicAccessBlock response element from \a xml.
 */
void GetPublicAccessBlockResponsePrivate::parseGetPublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
