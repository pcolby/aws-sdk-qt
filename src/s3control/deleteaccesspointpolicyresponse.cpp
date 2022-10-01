// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspointpolicyresponse.h"
#include "deleteaccesspointpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyResponse
 * \brief The DeleteAccessPointPolicyResponse class provides an interace for S3Control DeleteAccessPointPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointPolicy
 */

/*!
 * Constructs a DeleteAccessPointPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPointPolicyResponse::DeleteAccessPointPolicyResponse(
        const DeleteAccessPointPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteAccessPointPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPointPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPointPolicyRequest * DeleteAccessPointPolicyResponse::request() const
{
    Q_D(const DeleteAccessPointPolicyResponse);
    return static_cast<const DeleteAccessPointPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteAccessPointPolicy \a response.
 */
void DeleteAccessPointPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPointPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyResponsePrivate
 * \brief The DeleteAccessPointPolicyResponsePrivate class provides private implementation for DeleteAccessPointPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointPolicyResponsePrivate object with public implementation \a q.
 */
DeleteAccessPointPolicyResponsePrivate::DeleteAccessPointPolicyResponsePrivate(
    DeleteAccessPointPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteAccessPointPolicy response element from \a xml.
 */
void DeleteAccessPointPolicyResponsePrivate::parseDeleteAccessPointPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPointPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
