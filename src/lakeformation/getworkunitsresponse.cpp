// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkunitsresponse.h"
#include "getworkunitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsResponse
 * \brief The GetWorkUnitsResponse class provides an interace for LakeFormation GetWorkUnits responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnits
 */

/*!
 * Constructs a GetWorkUnitsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkUnitsResponse::GetWorkUnitsResponse(
        const GetWorkUnitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetWorkUnitsResponsePrivate(this), parent)
{
    setRequest(new GetWorkUnitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkUnitsRequest * GetWorkUnitsResponse::request() const
{
    Q_D(const GetWorkUnitsResponse);
    return static_cast<const GetWorkUnitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetWorkUnits \a response.
 */
void GetWorkUnitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkUnitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsResponsePrivate
 * \brief The GetWorkUnitsResponsePrivate class provides private implementation for GetWorkUnitsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitsResponsePrivate object with public implementation \a q.
 */
GetWorkUnitsResponsePrivate::GetWorkUnitsResponsePrivate(
    GetWorkUnitsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetWorkUnits response element from \a xml.
 */
void GetWorkUnitsResponsePrivate::parseGetWorkUnitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkUnitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
