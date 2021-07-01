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

#include "getstudiomemberresponse.h"
#include "getstudiomemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStudioMemberResponse
 * \brief The GetStudioMemberResponse class provides an interace for NimbleStudio GetStudioMember responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStudioMember
 */

/*!
 * Constructs a GetStudioMemberResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioMemberResponse::GetStudioMemberResponse(
        const GetStudioMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetStudioMemberResponsePrivate(this), parent)
{
    setRequest(new GetStudioMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioMemberRequest * GetStudioMemberResponse::request() const
{
    Q_D(const GetStudioMemberResponse);
    return static_cast<const GetStudioMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetStudioMember \a response.
 */
void GetStudioMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetStudioMemberResponsePrivate
 * \brief The GetStudioMemberResponsePrivate class provides private implementation for GetStudioMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStudioMemberResponsePrivate object with public implementation \a q.
 */
GetStudioMemberResponsePrivate::GetStudioMemberResponsePrivate(
    GetStudioMemberResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetStudioMember response element from \a xml.
 */
void GetStudioMemberResponsePrivate::parseGetStudioMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
