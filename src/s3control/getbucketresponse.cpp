// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketresponse.h"
#include "getbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketResponse
 * \brief The GetBucketResponse class provides an interace for S3Control GetBucket responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucket
 */

/*!
 * Constructs a GetBucketResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketResponse::GetBucketResponse(
        const GetBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetBucketResponsePrivate(this), parent)
{
    setRequest(new GetBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketRequest * GetBucketResponse::request() const
{
    Q_D(const GetBucketResponse);
    return static_cast<const GetBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetBucket \a response.
 */
void GetBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetBucketResponsePrivate
 * \brief The GetBucketResponsePrivate class provides private implementation for GetBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketResponsePrivate object with public implementation \a q.
 */
GetBucketResponsePrivate::GetBucketResponsePrivate(
    GetBucketResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetBucket response element from \a xml.
 */
void GetBucketResponsePrivate::parseGetBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
