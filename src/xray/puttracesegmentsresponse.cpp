// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
