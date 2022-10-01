// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableenhancedmonitoringresponse.h"
#include "enableenhancedmonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::EnableEnhancedMonitoringResponse
 * \brief The EnableEnhancedMonitoringResponse class provides an interace for Kinesis EnableEnhancedMonitoring responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::enableEnhancedMonitoring
 */

/*!
 * Constructs a EnableEnhancedMonitoringResponse object for \a reply to \a request, with parent \a parent.
 */
EnableEnhancedMonitoringResponse::EnableEnhancedMonitoringResponse(
        const EnableEnhancedMonitoringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new EnableEnhancedMonitoringResponsePrivate(this), parent)
{
    setRequest(new EnableEnhancedMonitoringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableEnhancedMonitoringRequest * EnableEnhancedMonitoringResponse::request() const
{
    Q_D(const EnableEnhancedMonitoringResponse);
    return static_cast<const EnableEnhancedMonitoringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis EnableEnhancedMonitoring \a response.
 */
void EnableEnhancedMonitoringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableEnhancedMonitoringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::EnableEnhancedMonitoringResponsePrivate
 * \brief The EnableEnhancedMonitoringResponsePrivate class provides private implementation for EnableEnhancedMonitoringResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a EnableEnhancedMonitoringResponsePrivate object with public implementation \a q.
 */
EnableEnhancedMonitoringResponsePrivate::EnableEnhancedMonitoringResponsePrivate(
    EnableEnhancedMonitoringResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis EnableEnhancedMonitoring response element from \a xml.
 */
void EnableEnhancedMonitoringResponsePrivate::parseEnableEnhancedMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableEnhancedMonitoringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
