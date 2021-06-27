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

#include "createconnectionaliasresponse.h"
#include "createconnectionaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateConnectionAliasResponse
 * \brief The CreateConnectionAliasResponse class provides an interace for WorkSpaces CreateConnectionAlias responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::createConnectionAlias
 */

/*!
 * Constructs a CreateConnectionAliasResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectionAliasResponse::CreateConnectionAliasResponse(
        const CreateConnectionAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new CreateConnectionAliasResponsePrivate(this), parent)
{
    setRequest(new CreateConnectionAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectionAliasRequest * CreateConnectionAliasResponse::request() const
{
    return static_cast<const CreateConnectionAliasRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces CreateConnectionAlias \a response.
 */
void CreateConnectionAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectionAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::CreateConnectionAliasResponsePrivate
 * \brief The CreateConnectionAliasResponsePrivate class provides private implementation for CreateConnectionAliasResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateConnectionAliasResponsePrivate object with public implementation \a q.
 */
CreateConnectionAliasResponsePrivate::CreateConnectionAliasResponsePrivate(
    CreateConnectionAliasResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces CreateConnectionAlias response element from \a xml.
 */
void CreateConnectionAliasResponsePrivate::parseCreateConnectionAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectionAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
