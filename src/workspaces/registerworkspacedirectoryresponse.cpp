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

#include "registerworkspacedirectoryresponse.h"
#include "registerworkspacedirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RegisterWorkspaceDirectoryResponse
 * \brief The RegisterWorkspaceDirectoryResponse class provides an interace for WorkSpaces RegisterWorkspaceDirectory responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::registerWorkspaceDirectory
 */

/*!
 * Constructs a RegisterWorkspaceDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterWorkspaceDirectoryResponse::RegisterWorkspaceDirectoryResponse(
        const RegisterWorkspaceDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RegisterWorkspaceDirectoryResponsePrivate(this), parent)
{
    setRequest(new RegisterWorkspaceDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterWorkspaceDirectoryRequest * RegisterWorkspaceDirectoryResponse::request() const
{
    return static_cast<const RegisterWorkspaceDirectoryRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces RegisterWorkspaceDirectory \a response.
 */
void RegisterWorkspaceDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterWorkspaceDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::RegisterWorkspaceDirectoryResponsePrivate
 * \brief The RegisterWorkspaceDirectoryResponsePrivate class provides private implementation for RegisterWorkspaceDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RegisterWorkspaceDirectoryResponsePrivate object with public implementation \a q.
 */
RegisterWorkspaceDirectoryResponsePrivate::RegisterWorkspaceDirectoryResponsePrivate(
    RegisterWorkspaceDirectoryResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces RegisterWorkspaceDirectory response element from \a xml.
 */
void RegisterWorkspaceDirectoryResponsePrivate::parseRegisterWorkspaceDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterWorkspaceDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
