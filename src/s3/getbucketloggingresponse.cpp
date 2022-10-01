// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketloggingresponse.h"
#include "getbucketloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLoggingResponse
 * \brief The GetBucketLoggingResponse class provides an interace for S3 GetBucketLogging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLogging
 */

/*!
 * Constructs a GetBucketLoggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLoggingResponse::GetBucketLoggingResponse(
        const GetBucketLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLoggingResponsePrivate(this), parent)
{
    setRequest(new GetBucketLoggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLoggingRequest * GetBucketLoggingResponse::request() const
{
    Q_D(const GetBucketLoggingResponse);
    return static_cast<const GetBucketLoggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLogging \a response.
 */
void GetBucketLoggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLoggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLoggingResponsePrivate
 * \brief The GetBucketLoggingResponsePrivate class provides private implementation for GetBucketLoggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLoggingResponsePrivate object with public implementation \a q.
 */
GetBucketLoggingResponsePrivate::GetBucketLoggingResponsePrivate(
    GetBucketLoggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLogging response element from \a xml.
 */
void GetBucketLoggingResponsePrivate::parseGetBucketLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLoggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
