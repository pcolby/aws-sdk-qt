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

#include "getdataviewresponse.h"
#include "getdataviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetDataViewResponse
 * \brief The GetDataViewResponse class provides an interace for FinspaceData GetDataView responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getDataView
 */

/*!
 * Constructs a GetDataViewResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataViewResponse::GetDataViewResponse(
        const GetDataViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetDataViewResponsePrivate(this), parent)
{
    setRequest(new GetDataViewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataViewRequest * GetDataViewResponse::request() const
{
    Q_D(const GetDataViewResponse);
    return static_cast<const GetDataViewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetDataView \a response.
 */
void GetDataViewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetDataViewResponsePrivate
 * \brief The GetDataViewResponsePrivate class provides private implementation for GetDataViewResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetDataViewResponsePrivate object with public implementation \a q.
 */
GetDataViewResponsePrivate::GetDataViewResponsePrivate(
    GetDataViewResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetDataView response element from \a xml.
 */
void GetDataViewResponsePrivate::parseGetDataViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataViewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
