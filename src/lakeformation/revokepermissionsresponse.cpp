// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokepermissionsresponse.h"
#include "revokepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RevokePermissionsResponse
 * \brief The RevokePermissionsResponse class provides an interace for LakeFormation RevokePermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::revokePermissions
 */

/*!
 * Constructs a RevokePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
RevokePermissionsResponse::RevokePermissionsResponse(
        const RevokePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new RevokePermissionsResponsePrivate(this), parent)
{
    setRequest(new RevokePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokePermissionsRequest * RevokePermissionsResponse::request() const
{
    Q_D(const RevokePermissionsResponse);
    return static_cast<const RevokePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation RevokePermissions \a response.
 */
void RevokePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::RevokePermissionsResponsePrivate
 * \brief The RevokePermissionsResponsePrivate class provides private implementation for RevokePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RevokePermissionsResponsePrivate object with public implementation \a q.
 */
RevokePermissionsResponsePrivate::RevokePermissionsResponsePrivate(
    RevokePermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation RevokePermissions response element from \a xml.
 */
void RevokePermissionsResponsePrivate::parseRevokePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
