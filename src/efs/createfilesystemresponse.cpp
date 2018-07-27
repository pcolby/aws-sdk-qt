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

#include "createfilesystemresponse.h"
#include "createfilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::CreateFileSystemResponse
 * \brief The CreateFileSystemResponse class provides an interace for EFS CreateFileSystem responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::createFileSystem
 */

/*!
 * Constructs a CreateFileSystemResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFileSystemResponse::CreateFileSystemResponse(
        const CreateFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new CreateFileSystemResponsePrivate(this), parent)
{
    setRequest(new CreateFileSystemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFileSystemRequest * CreateFileSystemResponse::request() const
{
    Q_D(const CreateFileSystemResponse);
    return static_cast<const CreateFileSystemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EFS CreateFileSystem \a response.
 */
void CreateFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::CreateFileSystemResponsePrivate
 * \brief The CreateFileSystemResponsePrivate class provides private implementation for CreateFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a CreateFileSystemResponsePrivate object with public implementation \a q.
 */
CreateFileSystemResponsePrivate::CreateFileSystemResponsePrivate(
    CreateFileSystemResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS CreateFileSystem response element from \a xml.
 */
void CreateFileSystemResponsePrivate::parseCreateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
