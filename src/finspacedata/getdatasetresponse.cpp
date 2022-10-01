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
