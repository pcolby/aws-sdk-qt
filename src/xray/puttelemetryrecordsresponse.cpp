// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puttelemetryrecordsresponse.h"
#include "puttelemetryrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutTelemetryRecordsResponse
 * \brief The PutTelemetryRecordsResponse class provides an interace for XRay PutTelemetryRecords responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::putTelemetryRecords
 */

/*!
 * Constructs a PutTelemetryRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
PutTelemetryRecordsResponse::PutTelemetryRecordsResponse(
        const PutTelemetryRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new PutTelemetryRecordsResponsePrivate(this), parent)
{
    setRequest(new PutTelemetryRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutTelemetryRecordsRequest * PutTelemetryRecordsResponse::request() const
{
    Q_D(const PutTelemetryRecordsResponse);
    return static_cast<const PutTelemetryRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay PutTelemetryRecords \a response.
 */
void PutTelemetryRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutTelemetryRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::PutTelemetryRecordsResponsePrivate
 * \brief The PutTelemetryRecordsResponsePrivate class provides private implementation for PutTelemetryRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a PutTelemetryRecordsResponsePrivate object with public implementation \a q.
 */
PutTelemetryRecordsResponsePrivate::PutTelemetryRecordsResponsePrivate(
    PutTelemetryRecordsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay PutTelemetryRecords response element from \a xml.
 */
void PutTelemetryRecordsResponsePrivate::parsePutTelemetryRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutTelemetryRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
