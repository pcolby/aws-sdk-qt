/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
