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

#include "associatepersonastoentitiesresponse.h"
#include "associatepersonastoentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::AssociatePersonasToEntitiesResponse
 * \brief The AssociatePersonasToEntitiesResponse class provides an interace for Kendra AssociatePersonasToEntities responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::associatePersonasToEntities
 */

/*!
 * Constructs a AssociatePersonasToEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
AssociatePersonasToEntitiesResponse::AssociatePersonasToEntitiesResponse(
        const AssociatePersonasToEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new AssociatePersonasToEntitiesResponsePrivate(this), parent)
{
    setRequest(new AssociatePersonasToEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociatePersonasToEntitiesRequest * AssociatePersonasToEntitiesResponse::request() const
{
    Q_D(const AssociatePersonasToEntitiesResponse);
    return static_cast<const AssociatePersonasToEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra AssociatePersonasToEntities \a response.
 */
void AssociatePersonasToEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociatePersonasToEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::AssociatePersonasToEntitiesResponsePrivate
 * \brief The AssociatePersonasToEntitiesResponsePrivate class provides private implementation for AssociatePersonasToEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a AssociatePersonasToEntitiesResponsePrivate object with public implementation \a q.
 */
AssociatePersonasToEntitiesResponsePrivate::AssociatePersonasToEntitiesResponsePrivate(
    AssociatePersonasToEntitiesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra AssociatePersonasToEntities response element from \a xml.
 */
void AssociatePersonasToEntitiesResponsePrivate::parseAssociatePersonasToEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociatePersonasToEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
