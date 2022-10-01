// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "releasefilesystemnfsv3locksresponse.h"
#include "releasefilesystemnfsv3locksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::ReleaseFileSystemNfsV3LocksResponse
 * \brief The ReleaseFileSystemNfsV3LocksResponse class provides an interace for FSx ReleaseFileSystemNfsV3Locks responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::releaseFileSystemNfsV3Locks
 */

/*!
 * Constructs a ReleaseFileSystemNfsV3LocksResponse object for \a reply to \a request, with parent \a parent.
 */
ReleaseFileSystemNfsV3LocksResponse::ReleaseFileSystemNfsV3LocksResponse(
        const ReleaseFileSystemNfsV3LocksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new ReleaseFileSystemNfsV3LocksResponsePrivate(this), parent)
{
    setRequest(new ReleaseFileSystemNfsV3LocksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReleaseFileSystemNfsV3LocksRequest * ReleaseFileSystemNfsV3LocksResponse::request() const
{
    Q_D(const ReleaseFileSystemNfsV3LocksResponse);
    return static_cast<const ReleaseFileSystemNfsV3LocksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx ReleaseFileSystemNfsV3Locks \a response.
 */
void ReleaseFileSystemNfsV3LocksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReleaseFileSystemNfsV3LocksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::ReleaseFileSystemNfsV3LocksResponsePrivate
 * \brief The ReleaseFileSystemNfsV3LocksResponsePrivate class provides private implementation for ReleaseFileSystemNfsV3LocksResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a ReleaseFileSystemNfsV3LocksResponsePrivate object with public implementation \a q.
 */
ReleaseFileSystemNfsV3LocksResponsePrivate::ReleaseFileSystemNfsV3LocksResponsePrivate(
    ReleaseFileSystemNfsV3LocksResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx ReleaseFileSystemNfsV3Locks response element from \a xml.
 */
void ReleaseFileSystemNfsV3LocksResponsePrivate::parseReleaseFileSystemNfsV3LocksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReleaseFileSystemNfsV3LocksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
