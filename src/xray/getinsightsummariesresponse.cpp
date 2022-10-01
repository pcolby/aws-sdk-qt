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

#include "getinsightsummariesresponse.h"
#include "getinsightsummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightSummariesResponse
 * \brief The GetInsightSummariesResponse class provides an interace for XRay GetInsightSummaries responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsightSummaries
 */

/*!
 * Constructs a GetInsightSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightSummariesResponse::GetInsightSummariesResponse(
        const GetInsightSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetInsightSummariesResponsePrivate(this), parent)
{
    setRequest(new GetInsightSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightSummariesRequest * GetInsightSummariesResponse::request() const
{
    Q_D(const GetInsightSummariesResponse);
    return static_cast<const GetInsightSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetInsightSummaries \a response.
 */
void GetInsightSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetInsightSummariesResponsePrivate
 * \brief The GetInsightSummariesResponsePrivate class provides private implementation for GetInsightSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightSummariesResponsePrivate object with public implementation \a q.
 */
GetInsightSummariesResponsePrivate::GetInsightSummariesResponsePrivate(
    GetInsightSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetInsightSummaries response element from \a xml.
 */
void GetInsightSummariesResponsePrivate::parseGetInsightSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
