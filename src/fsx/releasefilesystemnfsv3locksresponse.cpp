/*
    Copyright 2013-2021 Paul Colby

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
