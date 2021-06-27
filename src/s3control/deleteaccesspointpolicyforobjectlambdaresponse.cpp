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

#include "deleteaccesspointpolicyforobjectlambdaresponse.h"
#include "deleteaccesspointpolicyforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyForObjectLambdaResponse
 * \brief The DeleteAccessPointPolicyForObjectLambdaResponse class provides an interace for S3Control DeleteAccessPointPolicyForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a DeleteAccessPointPolicyForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPointPolicyForObjectLambdaResponse::DeleteAccessPointPolicyForObjectLambdaResponse(
        const DeleteAccessPointPolicyForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteAccessPointPolicyForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPointPolicyForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPointPolicyForObjectLambdaRequest * DeleteAccessPointPolicyForObjectLambdaResponse::request() const
{
    return static_cast<const DeleteAccessPointPolicyForObjectLambdaRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteAccessPointPolicyForObjectLambda \a response.
 */
void DeleteAccessPointPolicyForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPointPolicyForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyForObjectLambdaResponsePrivate
 * \brief The DeleteAccessPointPolicyForObjectLambdaResponsePrivate class provides private implementation for DeleteAccessPointPolicyForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointPolicyForObjectLambdaResponsePrivate object with public implementation \a q.
 */
DeleteAccessPointPolicyForObjectLambdaResponsePrivate::DeleteAccessPointPolicyForObjectLambdaResponsePrivate(
    DeleteAccessPointPolicyForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteAccessPointPolicyForObjectLambda response element from \a xml.
 */
void DeleteAccessPointPolicyForObjectLambdaResponsePrivate::parseDeleteAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPointPolicyForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
