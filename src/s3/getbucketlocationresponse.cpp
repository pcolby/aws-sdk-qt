// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketlocationresponse.h"
#include "getbucketlocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLocationResponse
 * \brief The GetBucketLocationResponse class provides an interace for S3 GetBucketLocation responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLocation
 */

/*!
 * Constructs a GetBucketLocationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLocationResponse::GetBucketLocationResponse(
        const GetBucketLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLocationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLocationRequest * GetBucketLocationResponse::request() const
{
    Q_D(const GetBucketLocationResponse);
    return static_cast<const GetBucketLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLocation \a response.
 */
void GetBucketLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLocationResponsePrivate
 * \brief The GetBucketLocationResponsePrivate class provides private implementation for GetBucketLocationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLocationResponsePrivate object with public implementation \a q.
 */
GetBucketLocationResponsePrivate::GetBucketLocationResponsePrivate(
    GetBucketLocationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLocation response element from \a xml.
 */
void GetBucketLocationResponsePrivate::parseGetBucketLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
