// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
