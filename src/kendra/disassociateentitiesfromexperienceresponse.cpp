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

#include "disassociateentitiesfromexperienceresponse.h"
#include "disassociateentitiesfromexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociateEntitiesFromExperienceResponse
 * \brief The DisassociateEntitiesFromExperienceResponse class provides an interace for Kendra DisassociateEntitiesFromExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociateEntitiesFromExperience
 */

/*!
 * Constructs a DisassociateEntitiesFromExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateEntitiesFromExperienceResponse::DisassociateEntitiesFromExperienceResponse(
        const DisassociateEntitiesFromExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DisassociateEntitiesFromExperienceResponsePrivate(this), parent)
{
    setRequest(new DisassociateEntitiesFromExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateEntitiesFromExperienceRequest * DisassociateEntitiesFromExperienceResponse::request() const
{
    Q_D(const DisassociateEntitiesFromExperienceResponse);
    return static_cast<const DisassociateEntitiesFromExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DisassociateEntitiesFromExperience \a response.
 */
void DisassociateEntitiesFromExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateEntitiesFromExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DisassociateEntitiesFromExperienceResponsePrivate
 * \brief The DisassociateEntitiesFromExperienceResponsePrivate class provides private implementation for DisassociateEntitiesFromExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociateEntitiesFromExperienceResponsePrivate object with public implementation \a q.
 */
DisassociateEntitiesFromExperienceResponsePrivate::DisassociateEntitiesFromExperienceResponsePrivate(
    DisassociateEntitiesFromExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DisassociateEntitiesFromExperience response element from \a xml.
 */
void DisassociateEntitiesFromExperienceResponsePrivate::parseDisassociateEntitiesFromExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateEntitiesFromExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
