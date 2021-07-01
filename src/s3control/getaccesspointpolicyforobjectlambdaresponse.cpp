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

#include "getaccesspointpolicyforobjectlambdaresponse.h"
#include "getaccesspointpolicyforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyForObjectLambdaResponse
 * \brief The GetAccessPointPolicyForObjectLambdaResponse class provides an interace for S3Control GetAccessPointPolicyForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a GetAccessPointPolicyForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointPolicyForObjectLambdaResponse::GetAccessPointPolicyForObjectLambdaResponse(
        const GetAccessPointPolicyForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointPolicyForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointPolicyForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointPolicyForObjectLambdaRequest * GetAccessPointPolicyForObjectLambdaResponse::request() const
{
    Q_D(const GetAccessPointPolicyForObjectLambdaResponse);
    return static_cast<const GetAccessPointPolicyForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointPolicyForObjectLambda \a response.
 */
void GetAccessPointPolicyForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointPolicyForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyForObjectLambdaResponsePrivate
 * \brief The GetAccessPointPolicyForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointPolicyForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointPolicyForObjectLambdaResponsePrivate::GetAccessPointPolicyForObjectLambdaResponsePrivate(
    GetAccessPointPolicyForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointPolicyForObjectLambda response element from \a xml.
 */
void GetAccessPointPolicyForObjectLambdaResponsePrivate::parseGetAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointPolicyForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
