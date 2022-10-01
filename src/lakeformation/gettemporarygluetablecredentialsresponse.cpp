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

#include "gettemporarygluetablecredentialsresponse.h"
#include "gettemporarygluetablecredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTemporaryGlueTableCredentialsResponse
 * \brief The GetTemporaryGlueTableCredentialsResponse class provides an interace for LakeFormation GetTemporaryGlueTableCredentials responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTemporaryGlueTableCredentials
 */

/*!
 * Constructs a GetTemporaryGlueTableCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTemporaryGlueTableCredentialsResponse::GetTemporaryGlueTableCredentialsResponse(
        const GetTemporaryGlueTableCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetTemporaryGlueTableCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetTemporaryGlueTableCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTemporaryGlueTableCredentialsRequest * GetTemporaryGlueTableCredentialsResponse::request() const
{
    Q_D(const GetTemporaryGlueTableCredentialsResponse);
    return static_cast<const GetTemporaryGlueTableCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetTemporaryGlueTableCredentials \a response.
 */
void GetTemporaryGlueTableCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTemporaryGlueTableCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetTemporaryGlueTableCredentialsResponsePrivate
 * \brief The GetTemporaryGlueTableCredentialsResponsePrivate class provides private implementation for GetTemporaryGlueTableCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTemporaryGlueTableCredentialsResponsePrivate object with public implementation \a q.
 */
GetTemporaryGlueTableCredentialsResponsePrivate::GetTemporaryGlueTableCredentialsResponsePrivate(
    GetTemporaryGlueTableCredentialsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetTemporaryGlueTableCredentials response element from \a xml.
 */
void GetTemporaryGlueTableCredentialsResponsePrivate::parseGetTemporaryGlueTableCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTemporaryGlueTableCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
