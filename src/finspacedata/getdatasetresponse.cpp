// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetresponse.h"
#include "getdatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetDatasetResponse
 * \brief The GetDatasetResponse class provides an interace for FinspaceData GetDataset responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getDataset
 */

/*!
 * Constructs a GetDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
GetDatasetResponse::GetDatasetResponse(
        const GetDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetDatasetResponsePrivate(this), parent)
{
    setRequest(new GetDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDatasetRequest * GetDatasetResponse::request() const
{
    Q_D(const GetDatasetResponse);
    return static_cast<const GetDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetDataset \a response.
 */
void GetDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetDatasetResponsePrivate
 * \brief The GetDatasetResponsePrivate class provides private implementation for GetDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetDatasetResponsePrivate object with public implementation \a q.
 */
GetDatasetResponsePrivate::GetDatasetResponsePrivate(
    GetDatasetResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetDataset response element from \a xml.
 */
void GetDatasetResponsePrivate::parseGetDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
