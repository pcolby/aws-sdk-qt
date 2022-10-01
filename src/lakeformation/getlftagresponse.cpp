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

#include "getlftagresponse.h"
#include "getlftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetLFTagResponse
 * \brief The GetLFTagResponse class provides an interace for LakeFormation GetLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getLFTag
 */

/*!
 * Constructs a GetLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
GetLFTagResponse::GetLFTagResponse(
        const GetLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetLFTagResponsePrivate(this), parent)
{
    setRequest(new GetLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLFTagRequest * GetLFTagResponse::request() const
{
    Q_D(const GetLFTagResponse);
    return static_cast<const GetLFTagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetLFTag \a response.
 */
void GetLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetLFTagResponsePrivate
 * \brief The GetLFTagResponsePrivate class provides private implementation for GetLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetLFTagResponsePrivate object with public implementation \a q.
 */
GetLFTagResponsePrivate::GetLFTagResponsePrivate(
    GetLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetLFTag response element from \a xml.
 */
void GetLFTagResponsePrivate::parseGetLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
