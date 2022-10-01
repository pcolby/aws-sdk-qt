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

#include "getchangesetresponse.h"
#include "getchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetChangesetResponse
 * \brief The GetChangesetResponse class provides an interace for FinspaceData GetChangeset responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getChangeset
 */

/*!
 * Constructs a GetChangesetResponse object for \a reply to \a request, with parent \a parent.
 */
GetChangesetResponse::GetChangesetResponse(
        const GetChangesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetChangesetResponsePrivate(this), parent)
{
    setRequest(new GetChangesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChangesetRequest * GetChangesetResponse::request() const
{
    Q_D(const GetChangesetResponse);
    return static_cast<const GetChangesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetChangeset \a response.
 */
void GetChangesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChangesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetChangesetResponsePrivate
 * \brief The GetChangesetResponsePrivate class provides private implementation for GetChangesetResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetChangesetResponsePrivate object with public implementation \a q.
 */
GetChangesetResponsePrivate::GetChangesetResponsePrivate(
    GetChangesetResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetChangeset response element from \a xml.
 */
void GetChangesetResponsePrivate::parseGetChangesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChangesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
