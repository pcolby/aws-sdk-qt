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

#include "deleteaccountassignmentresponse.h"
#include "deleteaccountassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeleteAccountAssignmentResponse
 * \brief The DeleteAccountAssignmentResponse class provides an interace for SSOAdmin DeleteAccountAssignment responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deleteAccountAssignment
 */

/*!
 * Constructs a DeleteAccountAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccountAssignmentResponse::DeleteAccountAssignmentResponse(
        const DeleteAccountAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DeleteAccountAssignmentResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccountAssignmentRequest * DeleteAccountAssignmentResponse::request() const
{
    Q_D(const DeleteAccountAssignmentResponse);
    return static_cast<const DeleteAccountAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DeleteAccountAssignment \a response.
 */
void DeleteAccountAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccountAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DeleteAccountAssignmentResponsePrivate
 * \brief The DeleteAccountAssignmentResponsePrivate class provides private implementation for DeleteAccountAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeleteAccountAssignmentResponsePrivate object with public implementation \a q.
 */
DeleteAccountAssignmentResponsePrivate::DeleteAccountAssignmentResponsePrivate(
    DeleteAccountAssignmentResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DeleteAccountAssignment response element from \a xml.
 */
void DeleteAccountAssignmentResponsePrivate::parseDeleteAccountAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
