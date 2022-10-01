// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
