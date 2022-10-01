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
