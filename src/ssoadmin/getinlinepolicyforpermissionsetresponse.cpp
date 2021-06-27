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

#include "getinlinepolicyforpermissionsetresponse.h"
#include "getinlinepolicyforpermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::GetInlinePolicyForPermissionSetResponse
 * \brief The GetInlinePolicyForPermissionSetResponse class provides an interace for SSOAdmin GetInlinePolicyForPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::getInlinePolicyForPermissionSet
 */

/*!
 * Constructs a GetInlinePolicyForPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetInlinePolicyForPermissionSetResponse::GetInlinePolicyForPermissionSetResponse(
        const GetInlinePolicyForPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new GetInlinePolicyForPermissionSetResponsePrivate(this), parent)
{
    setRequest(new GetInlinePolicyForPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInlinePolicyForPermissionSetRequest * GetInlinePolicyForPermissionSetResponse::request() const
{
    return static_cast<const GetInlinePolicyForPermissionSetRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin GetInlinePolicyForPermissionSet \a response.
 */
void GetInlinePolicyForPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInlinePolicyForPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::GetInlinePolicyForPermissionSetResponsePrivate
 * \brief The GetInlinePolicyForPermissionSetResponsePrivate class provides private implementation for GetInlinePolicyForPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a GetInlinePolicyForPermissionSetResponsePrivate object with public implementation \a q.
 */
GetInlinePolicyForPermissionSetResponsePrivate::GetInlinePolicyForPermissionSetResponsePrivate(
    GetInlinePolicyForPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin GetInlinePolicyForPermissionSet response element from \a xml.
 */
void GetInlinePolicyForPermissionSetResponsePrivate::parseGetInlinePolicyForPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInlinePolicyForPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
