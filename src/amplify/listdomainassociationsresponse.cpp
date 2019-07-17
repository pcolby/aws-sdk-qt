/*
    Copyright 2013-2019 Paul Colby

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

#include "listdomainassociationsresponse.h"
#include "listdomainassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListDomainAssociationsResponse
 * \brief The ListDomainAssociationsResponse class provides an interace for Amplify ListDomainAssociations responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::listDomainAssociations
 */

/*!
 * Constructs a ListDomainAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainAssociationsResponse::ListDomainAssociationsResponse(
        const ListDomainAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListDomainAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListDomainAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainAssociationsRequest * ListDomainAssociationsResponse::request() const
{
    Q_D(const ListDomainAssociationsResponse);
    return static_cast<const ListDomainAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListDomainAssociations \a response.
 */
void ListDomainAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListDomainAssociationsResponsePrivate
 * \brief The ListDomainAssociationsResponsePrivate class provides private implementation for ListDomainAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListDomainAssociationsResponsePrivate object with public implementation \a q.
 */
ListDomainAssociationsResponsePrivate::ListDomainAssociationsResponsePrivate(
    ListDomainAssociationsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListDomainAssociations response element from \a xml.
 */
void ListDomainAssociationsResponsePrivate::parseListDomainAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
