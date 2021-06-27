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

#include "batchrevokepermissionsresponse.h"
#include "batchrevokepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::BatchRevokePermissionsResponse
 * \brief The BatchRevokePermissionsResponse class provides an interace for LakeFormation BatchRevokePermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::batchRevokePermissions
 */

/*!
 * Constructs a BatchRevokePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchRevokePermissionsResponse::BatchRevokePermissionsResponse(
        const BatchRevokePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new BatchRevokePermissionsResponsePrivate(this), parent)
{
    setRequest(new BatchRevokePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchRevokePermissionsRequest * BatchRevokePermissionsResponse::request() const
{
    return static_cast<const BatchRevokePermissionsRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation BatchRevokePermissions \a response.
 */
void BatchRevokePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchRevokePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::BatchRevokePermissionsResponsePrivate
 * \brief The BatchRevokePermissionsResponsePrivate class provides private implementation for BatchRevokePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a BatchRevokePermissionsResponsePrivate object with public implementation \a q.
 */
BatchRevokePermissionsResponsePrivate::BatchRevokePermissionsResponsePrivate(
    BatchRevokePermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation BatchRevokePermissions response element from \a xml.
 */
void BatchRevokePermissionsResponsePrivate::parseBatchRevokePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchRevokePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
