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

#include "getquerystateresponse.h"
#include "getquerystateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStateResponse
 * \brief The GetQueryStateResponse class provides an interace for LakeFormation GetQueryState responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryState
 */

/*!
 * Constructs a GetQueryStateResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueryStateResponse::GetQueryStateResponse(
        const GetQueryStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetQueryStateResponsePrivate(this), parent)
{
    setRequest(new GetQueryStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueryStateRequest * GetQueryStateResponse::request() const
{
    Q_D(const GetQueryStateResponse);
    return static_cast<const GetQueryStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetQueryState \a response.
 */
void GetQueryStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueryStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetQueryStateResponsePrivate
 * \brief The GetQueryStateResponsePrivate class provides private implementation for GetQueryStateResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStateResponsePrivate object with public implementation \a q.
 */
GetQueryStateResponsePrivate::GetQueryStateResponsePrivate(
    GetQueryStateResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetQueryState response element from \a xml.
 */
void GetQueryStateResponsePrivate::parseGetQueryStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
