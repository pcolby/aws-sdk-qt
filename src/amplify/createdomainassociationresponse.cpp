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

#include "createdomainassociationresponse.h"
#include "createdomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateDomainAssociationResponse
 * \brief The CreateDomainAssociationResponse class provides an interace for Amplify CreateDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::createDomainAssociation
 */

/*!
 * Constructs a CreateDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainAssociationResponse::CreateDomainAssociationResponse(
        const CreateDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainAssociationRequest * CreateDomainAssociationResponse::request() const
{
    Q_D(const CreateDomainAssociationResponse);
    return static_cast<const CreateDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateDomainAssociation \a response.
 */
void CreateDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateDomainAssociationResponsePrivate
 * \brief The CreateDomainAssociationResponsePrivate class provides private implementation for CreateDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateDomainAssociationResponsePrivate object with public implementation \a q.
 */
CreateDomainAssociationResponsePrivate::CreateDomainAssociationResponsePrivate(
    CreateDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateDomainAssociation response element from \a xml.
 */
void CreateDomainAssociationResponsePrivate::parseCreateDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
