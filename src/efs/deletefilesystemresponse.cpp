// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefilesystemresponse.h"
#include "deletefilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteFileSystemResponse
 * \brief The DeleteFileSystemResponse class provides an interace for Efs DeleteFileSystem responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::deleteFileSystem
 */

/*!
 * Constructs a DeleteFileSystemResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFileSystemResponse::DeleteFileSystemResponse(
        const DeleteFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DeleteFileSystemResponsePrivate(this), parent)
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
 * Parses a successful Efs DeleteFileSystem \a response.
 */
void DeleteFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DeleteFileSystemResponsePrivate
 * \brief The DeleteFileSystemResponsePrivate class provides private implementation for DeleteFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteFileSystemResponsePrivate object with public implementation \a q.
 */
DeleteFileSystemResponsePrivate::DeleteFileSystemResponsePrivate(
    DeleteFileSystemResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DeleteFileSystem response element from \a xml.
 */
void DeleteFileSystemResponsePrivate::parseDeleteFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
