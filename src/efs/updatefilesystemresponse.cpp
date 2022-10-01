// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefilesystemresponse.h"
#include "updatefilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::UpdateFileSystemResponse
 * \brief The UpdateFileSystemResponse class provides an interace for Efs UpdateFileSystem responses.
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
 * Parses a successful Efs UpdateFileSystem \a response.
 */
void UpdateFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::UpdateFileSystemResponsePrivate
 * \brief The UpdateFileSystemResponsePrivate class provides private implementation for UpdateFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a UpdateFileSystemResponsePrivate object with public implementation \a q.
 */
UpdateFileSystemResponsePrivate::UpdateFileSystemResponsePrivate(
    UpdateFileSystemResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs UpdateFileSystem response element from \a xml.
 */
void UpdateFileSystemResponsePrivate::parseUpdateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
