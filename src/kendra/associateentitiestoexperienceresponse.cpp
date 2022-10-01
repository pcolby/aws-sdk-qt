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

#include "associateentitiestoexperienceresponse.h"
#include "associateentitiestoexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::AssociateEntitiesToExperienceResponse
 * \brief The AssociateEntitiesToExperienceResponse class provides an interace for Kendra AssociateEntitiesToExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::associateEntitiesToExperience
 */

/*!
 * Constructs a AssociateEntitiesToExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateEntitiesToExperienceResponse::AssociateEntitiesToExperienceResponse(
        const AssociateEntitiesToExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new AssociateEntitiesToExperienceResponsePrivate(this), parent)
{
    setRequest(new AssociateEntitiesToExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateEntitiesToExperienceRequest * AssociateEntitiesToExperienceResponse::request() const
{
    Q_D(const AssociateEntitiesToExperienceResponse);
    return static_cast<const AssociateEntitiesToExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra AssociateEntitiesToExperience \a response.
 */
void AssociateEntitiesToExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateEntitiesToExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::AssociateEntitiesToExperienceResponsePrivate
 * \brief The AssociateEntitiesToExperienceResponsePrivate class provides private implementation for AssociateEntitiesToExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a AssociateEntitiesToExperienceResponsePrivate object with public implementation \a q.
 */
AssociateEntitiesToExperienceResponsePrivate::AssociateEntitiesToExperienceResponsePrivate(
    AssociateEntitiesToExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra AssociateEntitiesToExperience response element from \a xml.
 */
void AssociateEntitiesToExperienceResponsePrivate::parseAssociateEntitiesToExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateEntitiesToExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
