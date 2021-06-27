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
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
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
    return static_cast<const PutDataLakeSettingsRequest *>(LakeFormationResponse::request());
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
