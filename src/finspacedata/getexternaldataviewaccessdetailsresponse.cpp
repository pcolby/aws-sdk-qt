// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
