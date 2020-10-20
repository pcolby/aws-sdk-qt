/*
    Copyright 2013-2020 Paul Colby

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

#include "gettracesummariesresponse.h"
#include "gettracesummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceSummariesResponse
 * \brief The GetTraceSummariesResponse class provides an interace for XRay GetTraceSummaries responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getTraceSummaries
 */

/*!
 * Constructs a GetTraceSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTraceSummariesResponse::GetTraceSummariesResponse(
        const GetTraceSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTraceSummariesResponsePrivate(this), parent)
{
    setRequest(new GetTraceSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTraceSummariesRequest * GetTraceSummariesResponse::request() const
{
    Q_D(const GetTraceSummariesResponse);
    return static_cast<const GetTraceSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetTraceSummaries \a response.
 */
void GetTraceSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTraceSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetTraceSummariesResponsePrivate
 * \brief The GetTraceSummariesResponsePrivate class provides private implementation for GetTraceSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTraceSummariesResponsePrivate object with public implementation \a q.
 */
GetTraceSummariesResponsePrivate::GetTraceSummariesResponsePrivate(
    GetTraceSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetTraceSummaries response element from \a xml.
 */
void GetTraceSummariesResponsePrivate::parseGetTraceSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTraceSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
