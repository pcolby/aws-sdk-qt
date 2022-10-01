// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfilesystemresponse.h"
#include "createfilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateFileSystemResponse
 * \brief The CreateFileSystemResponse class provides an interace for Efs CreateFileSystem responses.
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
 * Parses a successful Efs CreateFileSystem \a response.
 */
void CreateFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::CreateFileSystemResponsePrivate
 * \brief The CreateFileSystemResponsePrivate class provides private implementation for CreateFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateFileSystemResponsePrivate object with public implementation \a q.
 */
CreateFileSystemResponsePrivate::CreateFileSystemResponsePrivate(
    CreateFileSystemResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs CreateFileSystem response element from \a xml.
 */
void CreateFileSystemResponsePrivate::parseCreateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
