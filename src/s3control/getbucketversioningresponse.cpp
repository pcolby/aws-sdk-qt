// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketversioningresponse.h"
#include "getbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketVersioningResponse
 * \brief The GetBucketVersioningResponse class provides an interace for S3Control GetBucketVersioning responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketVersioning
 */

/*!
 * Constructs a GetBucketVersioningResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketVersioningResponse::GetBucketVersioningResponse(
        const GetBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new GetBucketVersioningRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketVersioningRequest * GetBucketVersioningResponse::request() const
{
    Q_D(const GetBucketVersioningResponse);
    return static_cast<const GetBucketVersioningRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetBucketVersioning \a response.
 */
void GetBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetBucketVersioningResponsePrivate
 * \brief The GetBucketVersioningResponsePrivate class provides private implementation for GetBucketVersioningResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketVersioningResponsePrivate object with public implementation \a q.
 */
GetBucketVersioningResponsePrivate::GetBucketVersioningResponsePrivate(
    GetBucketVersioningResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetBucketVersioning response element from \a xml.
 */
void GetBucketVersioningResponsePrivate::parseGetBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketVersioningResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
