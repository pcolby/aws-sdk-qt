// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketpolicyresponse.h"
#include "getbucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketPolicyResponse
 * \brief The GetBucketPolicyResponse class provides an interace for S3Control GetBucketPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketPolicy
 */

/*!
 * Constructs a GetBucketPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketPolicyResponse::GetBucketPolicyResponse(
        const GetBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new GetBucketPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketPolicyRequest * GetBucketPolicyResponse::request() const
{
    Q_D(const GetBucketPolicyResponse);
    return static_cast<const GetBucketPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetBucketPolicy \a response.
 */
void GetBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetBucketPolicyResponsePrivate
 * \brief The GetBucketPolicyResponsePrivate class provides private implementation for GetBucketPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketPolicyResponsePrivate object with public implementation \a q.
 */
GetBucketPolicyResponsePrivate::GetBucketPolicyResponsePrivate(
    GetBucketPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetBucketPolicy response element from \a xml.
 */
void GetBucketPolicyResponsePrivate::parseGetBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
