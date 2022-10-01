// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "grantpermissionsresponse.h"
#include "grantpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GrantPermissionsResponse
 * \brief The GrantPermissionsResponse class provides an interace for LakeFormation GrantPermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::grantPermissions
 */

/*!
 * Constructs a GrantPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
GrantPermissionsResponse::GrantPermissionsResponse(
        const GrantPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GrantPermissionsResponsePrivate(this), parent)
{
    setRequest(new GrantPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GrantPermissionsRequest * GrantPermissionsResponse::request() const
{
    Q_D(const GrantPermissionsResponse);
    return static_cast<const GrantPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GrantPermissions \a response.
 */
void GrantPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GrantPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GrantPermissionsResponsePrivate
 * \brief The GrantPermissionsResponsePrivate class provides private implementation for GrantPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GrantPermissionsResponsePrivate object with public implementation \a q.
 */
GrantPermissionsResponsePrivate::GrantPermissionsResponsePrivate(
    GrantPermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GrantPermissions response element from \a xml.
 */
void GrantPermissionsResponsePrivate::parseGrantPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GrantPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
