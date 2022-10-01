// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfilesystemresponse.h"
#include "createfilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateFileSystemResponse
 * \brief The CreateFileSystemResponse class provides an interace for FSx CreateFileSystem responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createFileSystem
 */

/*!
 * Constructs a CreateFileSystemResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFileSystemResponse::CreateFileSystemResponse(
        const CreateFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateFileSystemResponsePrivate(this), parent)
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
 * Parses a successful FSx CreateFileSystem \a response.
 */
void CreateFileSystemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateFileSystemResponsePrivate
 * \brief The CreateFileSystemResponsePrivate class provides private implementation for CreateFileSystemResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateFileSystemResponsePrivate object with public implementation \a q.
 */
CreateFileSystemResponsePrivate::CreateFileSystemResponsePrivate(
    CreateFileSystemResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateFileSystem response element from \a xml.
 */
void CreateFileSystemResponsePrivate::parseCreateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFileSystemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
