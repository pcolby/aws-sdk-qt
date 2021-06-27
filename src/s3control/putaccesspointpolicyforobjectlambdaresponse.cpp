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

#include "putaccesspointpolicyforobjectlambdaresponse.h"
#include "putaccesspointpolicyforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyForObjectLambdaResponse
 * \brief The PutAccessPointPolicyForObjectLambdaResponse class provides an interace for S3Control PutAccessPointPolicyForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a PutAccessPointPolicyForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccessPointPolicyForObjectLambdaResponse::PutAccessPointPolicyForObjectLambdaResponse(
        const PutAccessPointPolicyForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutAccessPointPolicyForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new PutAccessPointPolicyForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccessPointPolicyForObjectLambdaRequest * PutAccessPointPolicyForObjectLambdaResponse::request() const
{
    return static_cast<const PutAccessPointPolicyForObjectLambdaRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control PutAccessPointPolicyForObjectLambda \a response.
 */
void PutAccessPointPolicyForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccessPointPolicyForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyForObjectLambdaResponsePrivate
 * \brief The PutAccessPointPolicyForObjectLambdaResponsePrivate class provides private implementation for PutAccessPointPolicyForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointPolicyForObjectLambdaResponsePrivate object with public implementation \a q.
 */
PutAccessPointPolicyForObjectLambdaResponsePrivate::PutAccessPointPolicyForObjectLambdaResponsePrivate(
    PutAccessPointPolicyForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutAccessPointPolicyForObjectLambda response element from \a xml.
 */
void PutAccessPointPolicyForObjectLambdaResponsePrivate::parsePutAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccessPointPolicyForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
