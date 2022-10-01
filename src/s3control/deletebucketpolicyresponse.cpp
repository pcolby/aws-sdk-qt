// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketpolicyresponse.h"
#include "deletebucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketPolicyResponse
 * \brief The DeleteBucketPolicyResponse class provides an interace for S3Control DeleteBucketPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketPolicy
 */

/*!
 * Constructs a DeleteBucketPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketPolicyResponse::DeleteBucketPolicyResponse(
        const DeleteBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketPolicyRequest * DeleteBucketPolicyResponse::request() const
{
    Q_D(const DeleteBucketPolicyResponse);
    return static_cast<const DeleteBucketPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteBucketPolicy \a response.
 */
void DeleteBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteBucketPolicyResponsePrivate
 * \brief The DeleteBucketPolicyResponsePrivate class provides private implementation for DeleteBucketPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketPolicyResponsePrivate object with public implementation \a q.
 */
DeleteBucketPolicyResponsePrivate::DeleteBucketPolicyResponsePrivate(
    DeleteBucketPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteBucketPolicy response element from \a xml.
 */
void DeleteBucketPolicyResponsePrivate::parseDeleteBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
