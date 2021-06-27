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

#include "createaccountassignmentresponse.h"
#include "createaccountassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::CreateAccountAssignmentResponse
 * \brief The CreateAccountAssignmentResponse class provides an interace for SSOAdmin CreateAccountAssignment responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::createAccountAssignment
 */

/*!
 * Constructs a CreateAccountAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccountAssignmentResponse::CreateAccountAssignmentResponse(
        const CreateAccountAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new CreateAccountAssignmentResponsePrivate(this), parent)
{
    setRequest(new CreateAccountAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccountAssignmentRequest * CreateAccountAssignmentResponse::request() const
{
    return static_cast<const CreateAccountAssignmentRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin CreateAccountAssignment \a response.
 */
void CreateAccountAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccountAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::CreateAccountAssignmentResponsePrivate
 * \brief The CreateAccountAssignmentResponsePrivate class provides private implementation for CreateAccountAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a CreateAccountAssignmentResponsePrivate object with public implementation \a q.
 */
CreateAccountAssignmentResponsePrivate::CreateAccountAssignmentResponsePrivate(
    CreateAccountAssignmentResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin CreateAccountAssignment response element from \a xml.
 */
void CreateAccountAssignmentResponsePrivate::parseCreateAccountAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccountAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
