/*
    Copyright 2013-2018 Paul Colby

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

#include "puttracesegmentsresponse.h"
#include "puttracesegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutTraceSegmentsResponse
 * \brief The PutTraceSegmentsResponse class provides an interace for XRay PutTraceSegments responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::putTraceSegments
 */

/*!
 * Constructs a PutTraceSegmentsResponse object for \a reply to \a request, with parent \a parent.
 */
PutTraceSegmentsResponse::PutTraceSegmentsResponse(
        const PutTraceSegmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new PutTraceSegmentsResponsePrivate(this), parent)
{
    setRequest(new PutTraceSegmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutTraceSegmentsRequest * PutTraceSegmentsResponse::request() const
{
    Q_D(const PutTraceSegmentsResponse);
    return static_cast<const PutTraceSegmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay PutTraceSegments \a response.
 */
void PutTraceSegmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutTraceSegmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::PutTraceSegmentsResponsePrivate
 * \brief The PutTraceSegmentsResponsePrivate class provides private implementation for PutTraceSegmentsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a PutTraceSegmentsResponsePrivate object with public implementation \a q.
 */
PutTraceSegmentsResponsePrivate::PutTraceSegmentsResponsePrivate(
    PutTraceSegmentsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay PutTraceSegments response element from \a xml.
 */
void PutTraceSegmentsResponsePrivate::parsePutTraceSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutTraceSegmentsResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
