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

#include "getaccesspointforobjectlambdaresponse.h"
#include "getaccesspointforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointForObjectLambdaResponse
 * \brief The GetAccessPointForObjectLambdaResponse class provides an interace for S3Control GetAccessPointForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointForObjectLambda
 */

/*!
 * Constructs a GetAccessPointForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointForObjectLambdaResponse::GetAccessPointForObjectLambdaResponse(
        const GetAccessPointForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointForObjectLambdaRequest * GetAccessPointForObjectLambdaResponse::request() const
{
    return static_cast<const GetAccessPointForObjectLambdaRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointForObjectLambda \a response.
 */
void GetAccessPointForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointForObjectLambdaResponsePrivate
 * \brief The GetAccessPointForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointForObjectLambdaResponsePrivate::GetAccessPointForObjectLambdaResponsePrivate(
    GetAccessPointForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointForObjectLambda response element from \a xml.
 */
void GetAccessPointForObjectLambdaResponsePrivate::parseGetAccessPointForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
