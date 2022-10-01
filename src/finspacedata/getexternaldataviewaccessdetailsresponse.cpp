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

#include "getexternaldataviewaccessdetailsresponse.h"
#include "getexternaldataviewaccessdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetExternalDataViewAccessDetailsResponse
 * \brief The GetExternalDataViewAccessDetailsResponse class provides an interace for FinspaceData GetExternalDataViewAccessDetails responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getExternalDataViewAccessDetails
 */

/*!
 * Constructs a GetExternalDataViewAccessDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetExternalDataViewAccessDetailsResponse::GetExternalDataViewAccessDetailsResponse(
        const GetExternalDataViewAccessDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetExternalDataViewAccessDetailsResponsePrivate(this), parent)
{
    setRequest(new GetExternalDataViewAccessDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExternalDataViewAccessDetailsRequest * GetExternalDataViewAccessDetailsResponse::request() const
{
    Q_D(const GetExternalDataViewAccessDetailsResponse);
    return static_cast<const GetExternalDataViewAccessDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetExternalDataViewAccessDetails \a response.
 */
void GetExternalDataViewAccessDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExternalDataViewAccessDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetExternalDataViewAccessDetailsResponsePrivate
 * \brief The GetExternalDataViewAccessDetailsResponsePrivate class provides private implementation for GetExternalDataViewAccessDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetExternalDataViewAccessDetailsResponsePrivate object with public implementation \a q.
 */
GetExternalDataViewAccessDetailsResponsePrivate::GetExternalDataViewAccessDetailsResponsePrivate(
    GetExternalDataViewAccessDetailsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetExternalDataViewAccessDetails response element from \a xml.
 */
void GetExternalDataViewAccessDetailsResponsePrivate::parseGetExternalDataViewAccessDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExternalDataViewAccessDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
