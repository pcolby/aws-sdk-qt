/*
    Copyright 2013-2018 Paul Colby

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

#include "updatefilesystemresponse.h"
#include "updatefilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateFileSystemResponse
 * \brief The UpdateFileSystemResponse class provides an interace for FSx UpdateFileSystem responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateFileSystem
 */

/*!
 * Constructs a UpdateFileSystemResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFileSystemResponse::UpdateFileSystemResponse(
        const UpdateFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new UpdateFileSystemResponsePrivate(this), parent)
{
    setRequest(new UpdateFileSystemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFileSystemRequest * UpdateFileSystemResponse::request() const
{
    Q_D(const UpdateFileSystemResponse);
    return static_cast<const UpdateFileSystemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx UpdateFileSystem \a response.
 */
void UpdateFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::UpdateFileSystemResponsePrivate
 * \brief The UpdateFileSystemResponsePrivate class provides private implementation for UpdateFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateFileSystemResponsePrivate object with public implementation \a q.
 */
UpdateFileSystemResponsePrivate::UpdateFileSystemResponsePrivate(
    UpdateFileSystemResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx UpdateFileSystem response element from \a xml.
 */
void UpdateFileSystemResponsePrivate::parseUpdateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
