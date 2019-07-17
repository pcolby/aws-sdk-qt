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

#include "deletedomainassociationresponse.h"
#include "deletedomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationResponse
 * \brief The DeleteDomainAssociationResponse class provides an interace for Amplify DeleteDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::deleteDomainAssociation
 */

/*!
 * Constructs a DeleteDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainAssociationResponse::DeleteDomainAssociationResponse(
        const DeleteDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainAssociationRequest * DeleteDomainAssociationResponse::request() const
{
    Q_D(const DeleteDomainAssociationResponse);
    return static_cast<const DeleteDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteDomainAssociation \a response.
 */
void DeleteDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationResponsePrivate
 * \brief The DeleteDomainAssociationResponsePrivate class provides private implementation for DeleteDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteDomainAssociationResponsePrivate object with public implementation \a q.
 */
DeleteDomainAssociationResponsePrivate::DeleteDomainAssociationResponsePrivate(
    DeleteDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteDomainAssociation response element from \a xml.
 */
void DeleteDomainAssociationResponsePrivate::parseDeleteDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
