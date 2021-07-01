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

#include "disassociatefilesystemaliasesresponse.h"
#include "disassociatefilesystemaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesResponse
 * \brief The DisassociateFileSystemAliasesResponse class provides an interace for FSx DisassociateFileSystemAliases responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::disassociateFileSystemAliases
 */

/*!
 * Constructs a DisassociateFileSystemAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFileSystemAliasesResponse::DisassociateFileSystemAliasesResponse(
        const DisassociateFileSystemAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DisassociateFileSystemAliasesResponsePrivate(this), parent)
{
    setRequest(new DisassociateFileSystemAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateFileSystemAliasesRequest * DisassociateFileSystemAliasesResponse::request() const
{
    Q_D(const DisassociateFileSystemAliasesResponse);
    return static_cast<const DisassociateFileSystemAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DisassociateFileSystemAliases \a response.
 */
void DisassociateFileSystemAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateFileSystemAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesResponsePrivate
 * \brief The DisassociateFileSystemAliasesResponsePrivate class provides private implementation for DisassociateFileSystemAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DisassociateFileSystemAliasesResponsePrivate object with public implementation \a q.
 */
DisassociateFileSystemAliasesResponsePrivate::DisassociateFileSystemAliasesResponsePrivate(
    DisassociateFileSystemAliasesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DisassociateFileSystemAliases response element from \a xml.
 */
void DisassociateFileSystemAliasesResponsePrivate::parseDisassociateFileSystemAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFileSystemAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
