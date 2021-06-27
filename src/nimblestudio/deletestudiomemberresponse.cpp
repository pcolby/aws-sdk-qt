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

#include "deletestudiomemberresponse.h"
#include "deletestudiomemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStudioMemberResponse
 * \brief The DeleteStudioMemberResponse class provides an interace for NimbleStudio DeleteStudioMember responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStudioMember
 */

/*!
 * Constructs a DeleteStudioMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioMemberResponse::DeleteStudioMemberResponse(
        const DeleteStudioMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteStudioMemberResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioMemberRequest * DeleteStudioMemberResponse::request() const
{
    return static_cast<const DeleteStudioMemberRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteStudioMember \a response.
 */
void DeleteStudioMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteStudioMemberResponsePrivate
 * \brief The DeleteStudioMemberResponsePrivate class provides private implementation for DeleteStudioMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStudioMemberResponsePrivate object with public implementation \a q.
 */
DeleteStudioMemberResponsePrivate::DeleteStudioMemberResponsePrivate(
    DeleteStudioMemberResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteStudioMember response element from \a xml.
 */
void DeleteStudioMemberResponsePrivate::parseDeleteStudioMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
