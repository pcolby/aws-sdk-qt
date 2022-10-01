// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatalakesettingsresponse.h"
#include "getdatalakesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetDataLakeSettingsResponse
 * \brief The GetDataLakeSettingsResponse class provides an interace for LakeFormation GetDataLakeSettings responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getDataLakeSettings
 */

/*!
 * Constructs a GetDataLakeSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataLakeSettingsResponse::GetDataLakeSettingsResponse(
        const GetDataLakeSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetDataLakeSettingsResponsePrivate(this), parent)
{
    setRequest(new GetDataLakeSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataLakeSettingsRequest * GetDataLakeSettingsResponse::request() const
{
    Q_D(const GetDataLakeSettingsResponse);
    return static_cast<const GetDataLakeSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetDataLakeSettings \a response.
 */
void GetDataLakeSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataLakeSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetDataLakeSettingsResponsePrivate
 * \brief The GetDataLakeSettingsResponsePrivate class provides private implementation for GetDataLakeSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetDataLakeSettingsResponsePrivate object with public implementation \a q.
 */
GetDataLakeSettingsResponsePrivate::GetDataLakeSettingsResponsePrivate(
    GetDataLakeSettingsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetDataLakeSettings response element from \a xml.
 */
void GetDataLakeSettingsResponsePrivate::parseGetDataLakeSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataLakeSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
