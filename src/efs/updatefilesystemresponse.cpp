/*
    Copyright 2013-2019 Paul Colby

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
namespace EFS {

/*!
 * \class QtAws::EFS::UpdateFileSystemResponse
 * \brief The UpdateFileSystemResponse class provides an interace for EFS UpdateFileSystem responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::updateFileSystem
 */

/*!
 * Constructs a UpdateFileSystemResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFileSystemResponse::UpdateFileSystemResponse(
        const UpdateFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new UpdateFileSystemResponsePrivate(this), parent)
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
 * Parses a successful EFS UpdateFileSystem \a response.
 */
void UpdateFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::UpdateFileSystemResponsePrivate
 * \brief The UpdateFileSystemResponsePrivate class provides private implementation for UpdateFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a UpdateFileSystemResponsePrivate object with public implementation \a q.
 */
UpdateFileSystemResponsePrivate::UpdateFileSystemResponsePrivate(
    UpdateFileSystemResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS UpdateFileSystem response element from \a xml.
 */
void UpdateFileSystemResponsePrivate::parseUpdateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
