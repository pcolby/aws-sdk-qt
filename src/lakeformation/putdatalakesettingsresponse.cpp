// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdatalakesettingsresponse.h"
#include "putdatalakesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::PutDataLakeSettingsResponse
 * \brief The PutDataLakeSettingsResponse class provides an interace for LakeFormation PutDataLakeSettings responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::putDataLakeSettings
 */

/*!
 * Constructs a PutDataLakeSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
PutDataLakeSettingsResponse::PutDataLakeSettingsResponse(
        const PutDataLakeSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new PutDataLakeSettingsResponsePrivate(this), parent)
{
    setRequest(new PutDataLakeSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutDataLakeSettingsRequest * PutDataLakeSettingsResponse::request() const
{
    Q_D(const PutDataLakeSettingsResponse);
    return static_cast<const PutDataLakeSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation PutDataLakeSettings \a response.
 */
void PutDataLakeSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutDataLakeSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::PutDataLakeSettingsResponsePrivate
 * \brief The PutDataLakeSettingsResponsePrivate class provides private implementation for PutDataLakeSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a PutDataLakeSettingsResponsePrivate object with public implementation \a q.
 */
PutDataLakeSettingsResponsePrivate::PutDataLakeSettingsResponsePrivate(
    PutDataLakeSettingsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation PutDataLakeSettings response element from \a xml.
 */
void PutDataLakeSettingsResponsePrivate::parsePutDataLakeSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDataLakeSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
