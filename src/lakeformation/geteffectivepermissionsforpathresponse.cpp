// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteffectivepermissionsforpathresponse.h"
#include "geteffectivepermissionsforpathresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetEffectivePermissionsForPathResponse
 * \brief The GetEffectivePermissionsForPathResponse class provides an interace for LakeFormation GetEffectivePermissionsForPath responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getEffectivePermissionsForPath
 */

/*!
 * Constructs a GetEffectivePermissionsForPathResponse object for \a reply to \a request, with parent \a parent.
 */
GetEffectivePermissionsForPathResponse::GetEffectivePermissionsForPathResponse(
        const GetEffectivePermissionsForPathRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetEffectivePermissionsForPathResponsePrivate(this), parent)
{
    setRequest(new GetEffectivePermissionsForPathRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEffectivePermissionsForPathRequest * GetEffectivePermissionsForPathResponse::request() const
{
    Q_D(const GetEffectivePermissionsForPathResponse);
    return static_cast<const GetEffectivePermissionsForPathRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetEffectivePermissionsForPath \a response.
 */
void GetEffectivePermissionsForPathResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEffectivePermissionsForPathResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetEffectivePermissionsForPathResponsePrivate
 * \brief The GetEffectivePermissionsForPathResponsePrivate class provides private implementation for GetEffectivePermissionsForPathResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetEffectivePermissionsForPathResponsePrivate object with public implementation \a q.
 */
GetEffectivePermissionsForPathResponsePrivate::GetEffectivePermissionsForPathResponsePrivate(
    GetEffectivePermissionsForPathResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetEffectivePermissionsForPath response element from \a xml.
 */
void GetEffectivePermissionsForPathResponsePrivate::parseGetEffectivePermissionsForPathResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEffectivePermissionsForPathResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
