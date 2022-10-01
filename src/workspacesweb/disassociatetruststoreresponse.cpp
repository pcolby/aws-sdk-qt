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

#include "disassociatetruststoreresponse.h"
#include "disassociatetruststoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateTrustStoreResponse
 * \brief The DisassociateTrustStoreResponse class provides an interace for WorkSpacesWeb DisassociateTrustStore responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateTrustStore
 */

/*!
 * Constructs a DisassociateTrustStoreResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTrustStoreResponse::DisassociateTrustStoreResponse(
        const DisassociateTrustStoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DisassociateTrustStoreResponsePrivate(this), parent)
{
    setRequest(new DisassociateTrustStoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTrustStoreRequest * DisassociateTrustStoreResponse::request() const
{
    Q_D(const DisassociateTrustStoreResponse);
    return static_cast<const DisassociateTrustStoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DisassociateTrustStore \a response.
 */
void DisassociateTrustStoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTrustStoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateTrustStoreResponsePrivate
 * \brief The DisassociateTrustStoreResponsePrivate class provides private implementation for DisassociateTrustStoreResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateTrustStoreResponsePrivate object with public implementation \a q.
 */
DisassociateTrustStoreResponsePrivate::DisassociateTrustStoreResponsePrivate(
    DisassociateTrustStoreResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DisassociateTrustStore response element from \a xml.
 */
void DisassociateTrustStoreResponsePrivate::parseDisassociateTrustStoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTrustStoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
