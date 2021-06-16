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

#include "deleteconnectionaliasresponse.h"
#include "deleteconnectionaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteConnectionAliasResponse
 * \brief The DeleteConnectionAliasResponse class provides an interace for WorkSpaces DeleteConnectionAlias responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteConnectionAlias
 */

/*!
 * Constructs a DeleteConnectionAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectionAliasResponse::DeleteConnectionAliasResponse(
        const DeleteConnectionAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DeleteConnectionAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectionAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectionAliasRequest * DeleteConnectionAliasResponse::request() const
{
    Q_D(const DeleteConnectionAliasResponse);
    return static_cast<const DeleteConnectionAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DeleteConnectionAlias \a response.
 */
void DeleteConnectionAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectionAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DeleteConnectionAliasResponsePrivate
 * \brief The DeleteConnectionAliasResponsePrivate class provides private implementation for DeleteConnectionAliasResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteConnectionAliasResponsePrivate object with public implementation \a q.
 */
DeleteConnectionAliasResponsePrivate::DeleteConnectionAliasResponsePrivate(
    DeleteConnectionAliasResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DeleteConnectionAlias response element from \a xml.
 */
void DeleteConnectionAliasResponsePrivate::parseDeleteConnectionAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectionAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
