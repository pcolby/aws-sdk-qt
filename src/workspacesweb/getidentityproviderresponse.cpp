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

#include "getidentityproviderresponse.h"
#include "getidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetIdentityProviderResponse
 * \brief The GetIdentityProviderResponse class provides an interace for WorkSpacesWeb GetIdentityProvider responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getIdentityProvider
 */

/*!
 * Constructs a GetIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityProviderResponse::GetIdentityProviderResponse(
        const GetIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new GetIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new GetIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityProviderRequest * GetIdentityProviderResponse::request() const
{
    Q_D(const GetIdentityProviderResponse);
    return static_cast<const GetIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb GetIdentityProvider \a response.
 */
void GetIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::GetIdentityProviderResponsePrivate
 * \brief The GetIdentityProviderResponsePrivate class provides private implementation for GetIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetIdentityProviderResponsePrivate object with public implementation \a q.
 */
GetIdentityProviderResponsePrivate::GetIdentityProviderResponsePrivate(
    GetIdentityProviderResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb GetIdentityProvider response element from \a xml.
 */
void GetIdentityProviderResponsePrivate::parseGetIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
