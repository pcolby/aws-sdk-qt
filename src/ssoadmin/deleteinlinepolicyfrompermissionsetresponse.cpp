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

#include "deleteinlinepolicyfrompermissionsetresponse.h"
#include "deleteinlinepolicyfrompermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeleteInlinePolicyFromPermissionSetResponse
 * \brief The DeleteInlinePolicyFromPermissionSetResponse class provides an interace for SSOAdmin DeleteInlinePolicyFromPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deleteInlinePolicyFromPermissionSet
 */

/*!
 * Constructs a DeleteInlinePolicyFromPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInlinePolicyFromPermissionSetResponse::DeleteInlinePolicyFromPermissionSetResponse(
        const DeleteInlinePolicyFromPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DeleteInlinePolicyFromPermissionSetResponsePrivate(this), parent)
{
    setRequest(new DeleteInlinePolicyFromPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInlinePolicyFromPermissionSetRequest * DeleteInlinePolicyFromPermissionSetResponse::request() const
{
    Q_D(const DeleteInlinePolicyFromPermissionSetResponse);
    return static_cast<const DeleteInlinePolicyFromPermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DeleteInlinePolicyFromPermissionSet \a response.
 */
void DeleteInlinePolicyFromPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInlinePolicyFromPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DeleteInlinePolicyFromPermissionSetResponsePrivate
 * \brief The DeleteInlinePolicyFromPermissionSetResponsePrivate class provides private implementation for DeleteInlinePolicyFromPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeleteInlinePolicyFromPermissionSetResponsePrivate object with public implementation \a q.
 */
DeleteInlinePolicyFromPermissionSetResponsePrivate::DeleteInlinePolicyFromPermissionSetResponsePrivate(
    DeleteInlinePolicyFromPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DeleteInlinePolicyFromPermissionSet response element from \a xml.
 */
void DeleteInlinePolicyFromPermissionSetResponsePrivate::parseDeleteInlinePolicyFromPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInlinePolicyFromPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
