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

#include "provisionpermissionsetresponse.h"
#include "provisionpermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ProvisionPermissionSetResponse
 * \brief The ProvisionPermissionSetResponse class provides an interace for SSOAdmin ProvisionPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::provisionPermissionSet
 */

/*!
 * Constructs a ProvisionPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
ProvisionPermissionSetResponse::ProvisionPermissionSetResponse(
        const ProvisionPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ProvisionPermissionSetResponsePrivate(this), parent)
{
    setRequest(new ProvisionPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ProvisionPermissionSetRequest * ProvisionPermissionSetResponse::request() const
{
    Q_D(const ProvisionPermissionSetResponse);
    return static_cast<const ProvisionPermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ProvisionPermissionSet \a response.
 */
void ProvisionPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ProvisionPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ProvisionPermissionSetResponsePrivate
 * \brief The ProvisionPermissionSetResponsePrivate class provides private implementation for ProvisionPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ProvisionPermissionSetResponsePrivate object with public implementation \a q.
 */
ProvisionPermissionSetResponsePrivate::ProvisionPermissionSetResponsePrivate(
    ProvisionPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ProvisionPermissionSet response element from \a xml.
 */
void ProvisionPermissionSetResponsePrivate::parseProvisionPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ProvisionPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
