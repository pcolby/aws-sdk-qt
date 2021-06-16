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

#include "createpermissionsetresponse.h"
#include "createpermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::CreatePermissionSetResponse
 * \brief The CreatePermissionSetResponse class provides an interace for SSOAdmin CreatePermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::createPermissionSet
 */

/*!
 * Constructs a CreatePermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePermissionSetResponse::CreatePermissionSetResponse(
        const CreatePermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new CreatePermissionSetResponsePrivate(this), parent)
{
    setRequest(new CreatePermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePermissionSetRequest * CreatePermissionSetResponse::request() const
{
    Q_D(const CreatePermissionSetResponse);
    return static_cast<const CreatePermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin CreatePermissionSet \a response.
 */
void CreatePermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::CreatePermissionSetResponsePrivate
 * \brief The CreatePermissionSetResponsePrivate class provides private implementation for CreatePermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a CreatePermissionSetResponsePrivate object with public implementation \a q.
 */
CreatePermissionSetResponsePrivate::CreatePermissionSetResponsePrivate(
    CreatePermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin CreatePermissionSet response element from \a xml.
 */
void CreatePermissionSetResponsePrivate::parseCreatePermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
