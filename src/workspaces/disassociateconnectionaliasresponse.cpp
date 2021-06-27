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

#include "disassociateconnectionaliasresponse.h"
#include "disassociateconnectionaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DisassociateConnectionAliasResponse
 * \brief The DisassociateConnectionAliasResponse class provides an interace for WorkSpaces DisassociateConnectionAlias responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::disassociateConnectionAlias
 */

/*!
 * Constructs a DisassociateConnectionAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateConnectionAliasResponse::DisassociateConnectionAliasResponse(
        const DisassociateConnectionAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DisassociateConnectionAliasResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectionAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateConnectionAliasRequest * DisassociateConnectionAliasResponse::request() const
{
    return static_cast<const DisassociateConnectionAliasRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DisassociateConnectionAlias \a response.
 */
void DisassociateConnectionAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateConnectionAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DisassociateConnectionAliasResponsePrivate
 * \brief The DisassociateConnectionAliasResponsePrivate class provides private implementation for DisassociateConnectionAliasResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DisassociateConnectionAliasResponsePrivate object with public implementation \a q.
 */
DisassociateConnectionAliasResponsePrivate::DisassociateConnectionAliasResponsePrivate(
    DisassociateConnectionAliasResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DisassociateConnectionAlias response element from \a xml.
 */
void DisassociateConnectionAliasResponsePrivate::parseDisassociateConnectionAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectionAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
