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

#include "associatefilesystemaliasesresponse.h"
#include "associatefilesystemaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesResponse
 * \brief The AssociateFileSystemAliasesResponse class provides an interace for FSx AssociateFileSystemAliases responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::associateFileSystemAliases
 */

/*!
 * Constructs a AssociateFileSystemAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateFileSystemAliasesResponse::AssociateFileSystemAliasesResponse(
        const AssociateFileSystemAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new AssociateFileSystemAliasesResponsePrivate(this), parent)
{
    setRequest(new AssociateFileSystemAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateFileSystemAliasesRequest * AssociateFileSystemAliasesResponse::request() const
{
    return static_cast<const AssociateFileSystemAliasesRequest *>(FSxResponse::request());
}

/*!
 * \reimp
 * Parses a successful FSx AssociateFileSystemAliases \a response.
 */
void AssociateFileSystemAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateFileSystemAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesResponsePrivate
 * \brief The AssociateFileSystemAliasesResponsePrivate class provides private implementation for AssociateFileSystemAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a AssociateFileSystemAliasesResponsePrivate object with public implementation \a q.
 */
AssociateFileSystemAliasesResponsePrivate::AssociateFileSystemAliasesResponsePrivate(
    AssociateFileSystemAliasesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx AssociateFileSystemAliases response element from \a xml.
 */
void AssociateFileSystemAliasesResponsePrivate::parseAssociateFileSystemAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateFileSystemAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
