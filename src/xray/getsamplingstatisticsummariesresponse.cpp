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

#include "getsamplingstatisticsummariesresponse.h"
#include "getsamplingstatisticsummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingStatisticSummariesResponse
 * \brief The GetSamplingStatisticSummariesResponse class provides an interace for XRay GetSamplingStatisticSummaries responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getSamplingStatisticSummaries
 */

/*!
 * Constructs a GetSamplingStatisticSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSamplingStatisticSummariesResponse::GetSamplingStatisticSummariesResponse(
        const GetSamplingStatisticSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetSamplingStatisticSummariesResponsePrivate(this), parent)
{
    setRequest(new GetSamplingStatisticSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSamplingStatisticSummariesRequest * GetSamplingStatisticSummariesResponse::request() const
{
    Q_D(const GetSamplingStatisticSummariesResponse);
    return static_cast<const GetSamplingStatisticSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetSamplingStatisticSummaries \a response.
 */
void GetSamplingStatisticSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSamplingStatisticSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetSamplingStatisticSummariesResponsePrivate
 * \brief The GetSamplingStatisticSummariesResponsePrivate class provides private implementation for GetSamplingStatisticSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingStatisticSummariesResponsePrivate object with public implementation \a q.
 */
GetSamplingStatisticSummariesResponsePrivate::GetSamplingStatisticSummariesResponsePrivate(
    GetSamplingStatisticSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetSamplingStatisticSummaries response element from \a xml.
 */
void GetSamplingStatisticSummariesResponsePrivate::parseGetSamplingStatisticSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSamplingStatisticSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
