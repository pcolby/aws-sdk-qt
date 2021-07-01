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

#include "associateconnectionaliasresponse.h"
#include "associateconnectionaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::AssociateConnectionAliasResponse
 * \brief The AssociateConnectionAliasResponse class provides an interace for WorkSpaces AssociateConnectionAlias responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::associateConnectionAlias
 */

/*!
 * Constructs a AssociateConnectionAliasResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateConnectionAliasResponse::AssociateConnectionAliasResponse(
        const AssociateConnectionAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new AssociateConnectionAliasResponsePrivate(this), parent)
{
    setRequest(new AssociateConnectionAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateConnectionAliasRequest * AssociateConnectionAliasResponse::request() const
{
    Q_D(const AssociateConnectionAliasResponse);
    return static_cast<const AssociateConnectionAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces AssociateConnectionAlias \a response.
 */
void AssociateConnectionAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateConnectionAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::AssociateConnectionAliasResponsePrivate
 * \brief The AssociateConnectionAliasResponsePrivate class provides private implementation for AssociateConnectionAliasResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a AssociateConnectionAliasResponsePrivate object with public implementation \a q.
 */
AssociateConnectionAliasResponsePrivate::AssociateConnectionAliasResponsePrivate(
    AssociateConnectionAliasResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces AssociateConnectionAlias response element from \a xml.
 */
void AssociateConnectionAliasResponsePrivate::parseAssociateConnectionAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConnectionAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
