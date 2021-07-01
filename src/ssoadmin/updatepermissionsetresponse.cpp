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

#include "updatepermissionsetresponse.h"
#include "updatepermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::UpdatePermissionSetResponse
 * \brief The UpdatePermissionSetResponse class provides an interace for SSOAdmin UpdatePermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::updatePermissionSet
 */

/*!
 * Constructs a UpdatePermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePermissionSetResponse::UpdatePermissionSetResponse(
        const UpdatePermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new UpdatePermissionSetResponsePrivate(this), parent)
{
    setRequest(new UpdatePermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePermissionSetRequest * UpdatePermissionSetResponse::request() const
{
    Q_D(const UpdatePermissionSetResponse);
    return static_cast<const UpdatePermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin UpdatePermissionSet \a response.
 */
void UpdatePermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::UpdatePermissionSetResponsePrivate
 * \brief The UpdatePermissionSetResponsePrivate class provides private implementation for UpdatePermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a UpdatePermissionSetResponsePrivate object with public implementation \a q.
 */
UpdatePermissionSetResponsePrivate::UpdatePermissionSetResponsePrivate(
    UpdatePermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin UpdatePermissionSet response element from \a xml.
 */
void UpdatePermissionSetResponsePrivate::parseUpdatePermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
