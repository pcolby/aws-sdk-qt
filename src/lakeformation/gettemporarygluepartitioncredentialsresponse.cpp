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

#include "gettemporarygluepartitioncredentialsresponse.h"
#include "gettemporarygluepartitioncredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTemporaryGluePartitionCredentialsResponse
 * \brief The GetTemporaryGluePartitionCredentialsResponse class provides an interace for LakeFormation GetTemporaryGluePartitionCredentials responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTemporaryGluePartitionCredentials
 */

/*!
 * Constructs a GetTemporaryGluePartitionCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTemporaryGluePartitionCredentialsResponse::GetTemporaryGluePartitionCredentialsResponse(
        const GetTemporaryGluePartitionCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetTemporaryGluePartitionCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetTemporaryGluePartitionCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTemporaryGluePartitionCredentialsRequest * GetTemporaryGluePartitionCredentialsResponse::request() const
{
    Q_D(const GetTemporaryGluePartitionCredentialsResponse);
    return static_cast<const GetTemporaryGluePartitionCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetTemporaryGluePartitionCredentials \a response.
 */
void GetTemporaryGluePartitionCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTemporaryGluePartitionCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetTemporaryGluePartitionCredentialsResponsePrivate
 * \brief The GetTemporaryGluePartitionCredentialsResponsePrivate class provides private implementation for GetTemporaryGluePartitionCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTemporaryGluePartitionCredentialsResponsePrivate object with public implementation \a q.
 */
GetTemporaryGluePartitionCredentialsResponsePrivate::GetTemporaryGluePartitionCredentialsResponsePrivate(
    GetTemporaryGluePartitionCredentialsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetTemporaryGluePartitionCredentials response element from \a xml.
 */
void GetTemporaryGluePartitionCredentialsResponsePrivate::parseGetTemporaryGluePartitionCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTemporaryGluePartitionCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
