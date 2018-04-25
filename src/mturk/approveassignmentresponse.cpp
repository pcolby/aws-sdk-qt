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

#include "approveassignmentresponse.h"
#include "approveassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ApproveAssignmentResponse
 * \brief The ApproveAssignmentResponse class provides an interace for MTurk ApproveAssignment responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::approveAssignment
 */

/*!
 * Constructs a ApproveAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
ApproveAssignmentResponse::ApproveAssignmentResponse(
        const ApproveAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ApproveAssignmentResponsePrivate(this), parent)
{
    setRequest(new ApproveAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApproveAssignmentRequest * ApproveAssignmentResponse::request() const
{
    Q_D(const ApproveAssignmentResponse);
    return static_cast<const ApproveAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ApproveAssignment \a response.
 */
void ApproveAssignmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(ApproveAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ApproveAssignmentResponsePrivate
 * \brief The ApproveAssignmentResponsePrivate class provides private implementation for ApproveAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ApproveAssignmentResponsePrivate object with public implementation \a q.
 */
ApproveAssignmentResponsePrivate::ApproveAssignmentResponsePrivate(
    ApproveAssignmentResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ApproveAssignment response element from \a xml.
 */
void ApproveAssignmentResponsePrivate::parseApproveAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApproveAssignmentResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
