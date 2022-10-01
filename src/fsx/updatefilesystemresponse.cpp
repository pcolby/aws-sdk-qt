// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
