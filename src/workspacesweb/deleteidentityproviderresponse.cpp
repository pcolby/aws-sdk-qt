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

#include "deleteidentityproviderresponse.h"
#include "deleteidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeleteIdentityProviderResponse
 * \brief The DeleteIdentityProviderResponse class provides an interace for WorkSpacesWeb DeleteIdentityProvider responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deleteIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityProviderResponse::DeleteIdentityProviderResponse(
        const DeleteIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DeleteIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityProviderRequest * DeleteIdentityProviderResponse::request() const
{
    Q_D(const DeleteIdentityProviderResponse);
    return static_cast<const DeleteIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DeleteIdentityProvider \a response.
 */
void DeleteIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DeleteIdentityProviderResponsePrivate
 * \brief The DeleteIdentityProviderResponsePrivate class provides private implementation for DeleteIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeleteIdentityProviderResponsePrivate object with public implementation \a q.
 */
DeleteIdentityProviderResponsePrivate::DeleteIdentityProviderResponsePrivate(
    DeleteIdentityProviderResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DeleteIdentityProvider response element from \a xml.
 */
void DeleteIdentityProviderResponsePrivate::parseDeleteIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
