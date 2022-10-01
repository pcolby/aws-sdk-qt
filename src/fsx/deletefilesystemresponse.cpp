// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
