// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkinglocationresponse.h"
#include "getworkinglocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetWorkingLocationResponse
 * \brief The GetWorkingLocationResponse class provides an interace for FinspaceData GetWorkingLocation responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getWorkingLocation
 */

/*!
 * Constructs a GetWorkingLocationResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkingLocationResponse::GetWorkingLocationResponse(
        const GetWorkingLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetWorkingLocationResponsePrivate(this), parent)
{
    setRequest(new GetWorkingLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkingLocationRequest * GetWorkingLocationResponse::request() const
{
    Q_D(const GetWorkingLocationResponse);
    return static_cast<const GetWorkingLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetWorkingLocation \a response.
 */
void GetWorkingLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkingLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetWorkingLocationResponsePrivate
 * \brief The GetWorkingLocationResponsePrivate class provides private implementation for GetWorkingLocationResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetWorkingLocationResponsePrivate object with public implementation \a q.
 */
GetWorkingLocationResponsePrivate::GetWorkingLocationResponsePrivate(
    GetWorkingLocationResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetWorkingLocation response element from \a xml.
 */
void GetWorkingLocationResponsePrivate::parseGetWorkingLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkingLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
