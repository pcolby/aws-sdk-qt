/*
    Copyright 2013-2020 Paul Colby

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

#include "getdomainassociationresponse.h"
#include "getdomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetDomainAssociationResponse
 * \brief The GetDomainAssociationResponse class provides an interace for Amplify GetDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getDomainAssociation
 */

/*!
 * Constructs a GetDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainAssociationResponse::GetDomainAssociationResponse(
        const GetDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new GetDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainAssociationRequest * GetDomainAssociationResponse::request() const
{
    Q_D(const GetDomainAssociationResponse);
    return static_cast<const GetDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetDomainAssociation \a response.
 */
void GetDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetDomainAssociationResponsePrivate
 * \brief The GetDomainAssociationResponsePrivate class provides private implementation for GetDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetDomainAssociationResponsePrivate object with public implementation \a q.
 */
GetDomainAssociationResponsePrivate::GetDomainAssociationResponsePrivate(
    GetDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetDomainAssociation response element from \a xml.
 */
void GetDomainAssociationResponsePrivate::parseGetDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
