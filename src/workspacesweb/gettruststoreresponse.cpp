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

#include "gettruststoreresponse.h"
#include "gettruststoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetTrustStoreResponse
 * \brief The GetTrustStoreResponse class provides an interace for WorkSpacesWeb GetTrustStore responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getTrustStore
 */

/*!
 * Constructs a GetTrustStoreResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrustStoreResponse::GetTrustStoreResponse(
        const GetTrustStoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new GetTrustStoreResponsePrivate(this), parent)
{
    setRequest(new GetTrustStoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrustStoreRequest * GetTrustStoreResponse::request() const
{
    Q_D(const GetTrustStoreResponse);
    return static_cast<const GetTrustStoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb GetTrustStore \a response.
 */
void GetTrustStoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTrustStoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::GetTrustStoreResponsePrivate
 * \brief The GetTrustStoreResponsePrivate class provides private implementation for GetTrustStoreResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetTrustStoreResponsePrivate object with public implementation \a q.
 */
GetTrustStoreResponsePrivate::GetTrustStoreResponsePrivate(
    GetTrustStoreResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb GetTrustStore response element from \a xml.
 */
void GetTrustStoreResponsePrivate::parseGetTrustStoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrustStoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
