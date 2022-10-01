// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
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
    Q_D(const BatchRevokePermissionsResponse);
    return static_cast<const BatchRevokePermissionsRequest *>(d->request);
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
