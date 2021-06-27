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

#include "batchgrantpermissionsresponse.h"
#include "batchgrantpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::BatchGrantPermissionsResponse
 * \brief The BatchGrantPermissionsResponse class provides an interace for LakeFormation BatchGrantPermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::batchGrantPermissions
 */

/*!
 * Constructs a BatchGrantPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGrantPermissionsResponse::BatchGrantPermissionsResponse(
        const BatchGrantPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new BatchGrantPermissionsResponsePrivate(this), parent)
{
    setRequest(new BatchGrantPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGrantPermissionsRequest * BatchGrantPermissionsResponse::request() const
{
    return static_cast<const BatchGrantPermissionsRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation BatchGrantPermissions \a response.
 */
void BatchGrantPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGrantPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::BatchGrantPermissionsResponsePrivate
 * \brief The BatchGrantPermissionsResponsePrivate class provides private implementation for BatchGrantPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a BatchGrantPermissionsResponsePrivate object with public implementation \a q.
 */
BatchGrantPermissionsResponsePrivate::BatchGrantPermissionsResponsePrivate(
    BatchGrantPermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation BatchGrantPermissions response element from \a xml.
 */
void BatchGrantPermissionsResponsePrivate::parseBatchGrantPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGrantPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
