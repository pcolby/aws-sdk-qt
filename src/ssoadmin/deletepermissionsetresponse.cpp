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

#include "deletepermissionsetresponse.h"
#include "deletepermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeletePermissionSetResponse
 * \brief The DeletePermissionSetResponse class provides an interace for SSOAdmin DeletePermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deletePermissionSet
 */

/*!
 * Constructs a DeletePermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePermissionSetResponse::DeletePermissionSetResponse(
        const DeletePermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DeletePermissionSetResponsePrivate(this), parent)
{
    setRequest(new DeletePermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePermissionSetRequest * DeletePermissionSetResponse::request() const
{
    Q_D(const DeletePermissionSetResponse);
    return static_cast<const DeletePermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DeletePermissionSet \a response.
 */
void DeletePermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DeletePermissionSetResponsePrivate
 * \brief The DeletePermissionSetResponsePrivate class provides private implementation for DeletePermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeletePermissionSetResponsePrivate object with public implementation \a q.
 */
DeletePermissionSetResponsePrivate::DeletePermissionSetResponsePrivate(
    DeletePermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DeletePermissionSet response element from \a xml.
 */
void DeletePermissionSetResponsePrivate::parseDeletePermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
