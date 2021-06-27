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

#include "getaccesspointconfigurationforobjectlambdaresponse.h"
#include "getaccesspointconfigurationforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointConfigurationForObjectLambdaResponse
 * \brief The GetAccessPointConfigurationForObjectLambdaResponse class provides an interace for S3Control GetAccessPointConfigurationForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointConfigurationForObjectLambda
 */

/*!
 * Constructs a GetAccessPointConfigurationForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointConfigurationForObjectLambdaResponse::GetAccessPointConfigurationForObjectLambdaResponse(
        const GetAccessPointConfigurationForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointConfigurationForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointConfigurationForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointConfigurationForObjectLambdaRequest * GetAccessPointConfigurationForObjectLambdaResponse::request() const
{
    return static_cast<const GetAccessPointConfigurationForObjectLambdaRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointConfigurationForObjectLambda \a response.
 */
void GetAccessPointConfigurationForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointConfigurationForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointConfigurationForObjectLambdaResponsePrivate
 * \brief The GetAccessPointConfigurationForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointConfigurationForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointConfigurationForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointConfigurationForObjectLambdaResponsePrivate::GetAccessPointConfigurationForObjectLambdaResponsePrivate(
    GetAccessPointConfigurationForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointConfigurationForObjectLambda response element from \a xml.
 */
void GetAccessPointConfigurationForObjectLambdaResponsePrivate::parseGetAccessPointConfigurationForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointConfigurationForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
