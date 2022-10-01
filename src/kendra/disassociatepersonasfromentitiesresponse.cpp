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

#include "disassociatepersonasfromentitiesresponse.h"
#include "disassociatepersonasfromentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesResponse
 * \brief The DisassociatePersonasFromEntitiesResponse class provides an interace for Kendra DisassociatePersonasFromEntities responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociatePersonasFromEntities
 */

/*!
 * Constructs a DisassociatePersonasFromEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociatePersonasFromEntitiesResponse::DisassociatePersonasFromEntitiesResponse(
        const DisassociatePersonasFromEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DisassociatePersonasFromEntitiesResponsePrivate(this), parent)
{
    setRequest(new DisassociatePersonasFromEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociatePersonasFromEntitiesRequest * DisassociatePersonasFromEntitiesResponse::request() const
{
    Q_D(const DisassociatePersonasFromEntitiesResponse);
    return static_cast<const DisassociatePersonasFromEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DisassociatePersonasFromEntities \a response.
 */
void DisassociatePersonasFromEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociatePersonasFromEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesResponsePrivate
 * \brief The DisassociatePersonasFromEntitiesResponsePrivate class provides private implementation for DisassociatePersonasFromEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociatePersonasFromEntitiesResponsePrivate object with public implementation \a q.
 */
DisassociatePersonasFromEntitiesResponsePrivate::DisassociatePersonasFromEntitiesResponsePrivate(
    DisassociatePersonasFromEntitiesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DisassociatePersonasFromEntities response element from \a xml.
 */
void DisassociatePersonasFromEntitiesResponsePrivate::parseDisassociatePersonasFromEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociatePersonasFromEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
