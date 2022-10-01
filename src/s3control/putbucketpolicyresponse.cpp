// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketpolicyresponse.h"
#include "putbucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketPolicyResponse
 * \brief The PutBucketPolicyResponse class provides an interace for S3Control PutBucketPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketPolicy
 */

/*!
 * Constructs a PutBucketPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketPolicyResponse::PutBucketPolicyResponse(
        const PutBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new PutBucketPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketPolicyRequest * PutBucketPolicyResponse::request() const
{
    Q_D(const PutBucketPolicyResponse);
    return static_cast<const PutBucketPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutBucketPolicy \a response.
 */
void PutBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutBucketPolicyResponsePrivate
 * \brief The PutBucketPolicyResponsePrivate class provides private implementation for PutBucketPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketPolicyResponsePrivate object with public implementation \a q.
 */
PutBucketPolicyResponsePrivate::PutBucketPolicyResponsePrivate(
    PutBucketPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutBucketPolicy response element from \a xml.
 */
void PutBucketPolicyResponsePrivate::parsePutBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
