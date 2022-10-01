// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetresponse.h"
#include "updatedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdateDatasetResponse
 * \brief The UpdateDatasetResponse class provides an interace for FinspaceData UpdateDataset responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updateDataset
 */

/*!
 * Constructs a UpdateDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatasetResponse::UpdateDatasetResponse(
        const UpdateDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new UpdateDatasetResponsePrivate(this), parent)
{
    setRequest(new UpdateDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatasetRequest * UpdateDatasetResponse::request() const
{
    Q_D(const UpdateDatasetResponse);
    return static_cast<const UpdateDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData UpdateDataset \a response.
 */
void UpdateDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::UpdateDatasetResponsePrivate
 * \brief The UpdateDatasetResponsePrivate class provides private implementation for UpdateDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdateDatasetResponsePrivate object with public implementation \a q.
 */
UpdateDatasetResponsePrivate::UpdateDatasetResponsePrivate(
    UpdateDatasetResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData UpdateDataset response element from \a xml.
 */
void UpdateDatasetResponsePrivate::parseUpdateDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
