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

#include "updatechangesetresponse.h"
#include "updatechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdateChangesetResponse
 * \brief The UpdateChangesetResponse class provides an interace for FinspaceData UpdateChangeset responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updateChangeset
 */

/*!
 * Constructs a UpdateChangesetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChangesetResponse::UpdateChangesetResponse(
        const UpdateChangesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new UpdateChangesetResponsePrivate(this), parent)
{
    setRequest(new UpdateChangesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChangesetRequest * UpdateChangesetResponse::request() const
{
    Q_D(const UpdateChangesetResponse);
    return static_cast<const UpdateChangesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData UpdateChangeset \a response.
 */
void UpdateChangesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChangesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::UpdateChangesetResponsePrivate
 * \brief The UpdateChangesetResponsePrivate class provides private implementation for UpdateChangesetResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdateChangesetResponsePrivate object with public implementation \a q.
 */
UpdateChangesetResponsePrivate::UpdateChangesetResponsePrivate(
    UpdateChangesetResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData UpdateChangeset response element from \a xml.
 */
void UpdateChangesetResponsePrivate::parseUpdateChangesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChangesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
