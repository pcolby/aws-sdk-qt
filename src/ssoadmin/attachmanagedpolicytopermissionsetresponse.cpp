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

#include "attachmanagedpolicytopermissionsetresponse.h"
#include "attachmanagedpolicytopermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::AttachManagedPolicyToPermissionSetResponse
 * \brief The AttachManagedPolicyToPermissionSetResponse class provides an interace for SSOAdmin AttachManagedPolicyToPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::attachManagedPolicyToPermissionSet
 */

/*!
 * Constructs a AttachManagedPolicyToPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
AttachManagedPolicyToPermissionSetResponse::AttachManagedPolicyToPermissionSetResponse(
        const AttachManagedPolicyToPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new AttachManagedPolicyToPermissionSetResponsePrivate(this), parent)
{
    setRequest(new AttachManagedPolicyToPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachManagedPolicyToPermissionSetRequest * AttachManagedPolicyToPermissionSetResponse::request() const
{
    return static_cast<const AttachManagedPolicyToPermissionSetRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin AttachManagedPolicyToPermissionSet \a response.
 */
void AttachManagedPolicyToPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachManagedPolicyToPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::AttachManagedPolicyToPermissionSetResponsePrivate
 * \brief The AttachManagedPolicyToPermissionSetResponsePrivate class provides private implementation for AttachManagedPolicyToPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a AttachManagedPolicyToPermissionSetResponsePrivate object with public implementation \a q.
 */
AttachManagedPolicyToPermissionSetResponsePrivate::AttachManagedPolicyToPermissionSetResponsePrivate(
    AttachManagedPolicyToPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin AttachManagedPolicyToPermissionSet response element from \a xml.
 */
void AttachManagedPolicyToPermissionSetResponsePrivate::parseAttachManagedPolicyToPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachManagedPolicyToPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
