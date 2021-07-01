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

#include "detachmanagedpolicyfrompermissionsetresponse.h"
#include "detachmanagedpolicyfrompermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DetachManagedPolicyFromPermissionSetResponse
 * \brief The DetachManagedPolicyFromPermissionSetResponse class provides an interace for SSOAdmin DetachManagedPolicyFromPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::detachManagedPolicyFromPermissionSet
 */

/*!
 * Constructs a DetachManagedPolicyFromPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
DetachManagedPolicyFromPermissionSetResponse::DetachManagedPolicyFromPermissionSetResponse(
        const DetachManagedPolicyFromPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DetachManagedPolicyFromPermissionSetResponsePrivate(this), parent)
{
    setRequest(new DetachManagedPolicyFromPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachManagedPolicyFromPermissionSetRequest * DetachManagedPolicyFromPermissionSetResponse::request() const
{
    Q_D(const DetachManagedPolicyFromPermissionSetResponse);
    return static_cast<const DetachManagedPolicyFromPermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DetachManagedPolicyFromPermissionSet \a response.
 */
void DetachManagedPolicyFromPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachManagedPolicyFromPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DetachManagedPolicyFromPermissionSetResponsePrivate
 * \brief The DetachManagedPolicyFromPermissionSetResponsePrivate class provides private implementation for DetachManagedPolicyFromPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DetachManagedPolicyFromPermissionSetResponsePrivate object with public implementation \a q.
 */
DetachManagedPolicyFromPermissionSetResponsePrivate::DetachManagedPolicyFromPermissionSetResponsePrivate(
    DetachManagedPolicyFromPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DetachManagedPolicyFromPermissionSet response element from \a xml.
 */
void DetachManagedPolicyFromPermissionSetResponsePrivate::parseDetachManagedPolicyFromPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachManagedPolicyFromPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
