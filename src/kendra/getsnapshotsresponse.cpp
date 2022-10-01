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

#include "getsnapshotsresponse.h"
#include "getsnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::GetSnapshotsResponse
 * \brief The GetSnapshotsResponse class provides an interace for Kendra GetSnapshots responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::getSnapshots
 */

/*!
 * Constructs a GetSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSnapshotsResponse::GetSnapshotsResponse(
        const GetSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new GetSnapshotsResponsePrivate(this), parent)
{
    setRequest(new GetSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSnapshotsRequest * GetSnapshotsResponse::request() const
{
    Q_D(const GetSnapshotsResponse);
    return static_cast<const GetSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra GetSnapshots \a response.
 */
void GetSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::GetSnapshotsResponsePrivate
 * \brief The GetSnapshotsResponsePrivate class provides private implementation for GetSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a GetSnapshotsResponsePrivate object with public implementation \a q.
 */
GetSnapshotsResponsePrivate::GetSnapshotsResponsePrivate(
    GetSnapshotsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra GetSnapshots response element from \a xml.
 */
void GetSnapshotsResponsePrivate::parseGetSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
