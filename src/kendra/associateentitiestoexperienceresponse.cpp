// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
