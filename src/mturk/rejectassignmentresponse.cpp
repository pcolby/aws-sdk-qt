/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rejectassignmentresponse.h"
#include "rejectassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectAssignmentResponse
 * \brief The RejectAssignmentResponse class provides an interace for MTurk RejectAssignment responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectAssignment
 */

/*!
 * Constructs a RejectAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
RejectAssignmentResponse::RejectAssignmentResponse(
        const RejectAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new RejectAssignmentResponsePrivate(this), parent)
{
    setRequest(new RejectAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectAssignmentRequest * RejectAssignmentResponse::request() const
{
    Q_D(const RejectAssignmentResponse);
    return static_cast<const RejectAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk RejectAssignment \a response.
 */
void RejectAssignmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(RejectAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::RejectAssignmentResponsePrivate
 * \brief The RejectAssignmentResponsePrivate class provides private implementation for RejectAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectAssignmentResponsePrivate object with public implementation \a q.
 */
RejectAssignmentResponsePrivate::RejectAssignmentResponsePrivate(
    RejectAssignmentResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk RejectAssignment response element from \a xml.
 */
void RejectAssignmentResponsePrivate::parseRejectAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectAssignmentResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
