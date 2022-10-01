// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjecttaggingresponse.h"
#include "getobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTaggingResponse
 * \brief The GetObjectTaggingResponse class provides an interace for S3 GetObjectTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTagging
 */

/*!
 * Constructs a GetObjectTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectTaggingResponse::GetObjectTaggingResponse(
        const GetObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new GetObjectTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectTaggingRequest * GetObjectTaggingResponse::request() const
{
    Q_D(const GetObjectTaggingResponse);
    return static_cast<const GetObjectTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectTagging \a response.
 */
void GetObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectTaggingResponsePrivate
 * \brief The GetObjectTaggingResponsePrivate class provides private implementation for GetObjectTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTaggingResponsePrivate object with public implementation \a q.
 */
GetObjectTaggingResponsePrivate::GetObjectTaggingResponsePrivate(
    GetObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectTagging response element from \a xml.
 */
void GetObjectTaggingResponsePrivate::parseGetObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
