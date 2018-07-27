/*
    Copyright 2013-2018 Paul Colby

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

#include "getassignmentresponse.h"
#include "getassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetAssignmentResponse
 * \brief The GetAssignmentResponse class provides an interace for MTurk GetAssignment responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getAssignment
 */

/*!
 * Constructs a GetAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssignmentResponse::GetAssignmentResponse(
        const GetAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetAssignmentResponsePrivate(this), parent)
{
    setRequest(new GetAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssignmentRequest * GetAssignmentResponse::request() const
{
    Q_D(const GetAssignmentResponse);
    return static_cast<const GetAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetAssignment \a response.
 */
void GetAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetAssignmentResponsePrivate
 * \brief The GetAssignmentResponsePrivate class provides private implementation for GetAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetAssignmentResponsePrivate object with public implementation \a q.
 */
GetAssignmentResponsePrivate::GetAssignmentResponsePrivate(
    GetAssignmentResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetAssignment response element from \a xml.
 */
void GetAssignmentResponsePrivate::parseGetAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
