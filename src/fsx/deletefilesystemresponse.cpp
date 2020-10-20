/*
    Copyright 2013-2020 Paul Colby

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

#include "deletefilesystemresponse.h"
#include "deletefilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteFileSystemResponse
 * \brief The DeleteFileSystemResponse class provides an interace for FSx DeleteFileSystem responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteFileSystem
 */

/*!
 * Constructs a DeleteFileSystemResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFileSystemResponse::DeleteFileSystemResponse(
        const DeleteFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DeleteFileSystemResponsePrivate(this), parent)
{
    setRequest(new DeleteFileSystemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFileSystemRequest * DeleteFileSystemResponse::request() const
{
    Q_D(const DeleteFileSystemResponse);
    return static_cast<const DeleteFileSystemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DeleteFileSystem \a response.
 */
void DeleteFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DeleteFileSystemResponsePrivate
 * \brief The DeleteFileSystemResponsePrivate class provides private implementation for DeleteFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteFileSystemResponsePrivate object with public implementation \a q.
 */
DeleteFileSystemResponsePrivate::DeleteFileSystemResponsePrivate(
    DeleteFileSystemResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DeleteFileSystem response element from \a xml.
 */
void DeleteFileSystemResponsePrivate::parseDeleteFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
