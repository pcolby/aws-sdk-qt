// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdataingestionjobresponse.h"
#include "startdataingestionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StartDataIngestionJobResponse
 * \brief The StartDataIngestionJobResponse class provides an interace for LookoutEquipment StartDataIngestionJob responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::startDataIngestionJob
 */

/*!
 * Constructs a StartDataIngestionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDataIngestionJobResponse::StartDataIngestionJobResponse(
        const StartDataIngestionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new StartDataIngestionJobResponsePrivate(this), parent)
{
    setRequest(new StartDataIngestionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDataIngestionJobRequest * StartDataIngestionJobResponse::request() const
{
    Q_D(const StartDataIngestionJobResponse);
    return static_cast<const StartDataIngestionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment StartDataIngestionJob \a response.
 */
void StartDataIngestionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDataIngestionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::StartDataIngestionJobResponsePrivate
 * \brief The StartDataIngestionJobResponsePrivate class provides private implementation for StartDataIngestionJobResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StartDataIngestionJobResponsePrivate object with public implementation \a q.
 */
StartDataIngestionJobResponsePrivate::StartDataIngestionJobResponsePrivate(
    StartDataIngestionJobResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment StartDataIngestionJob response element from \a xml.
 */
void StartDataIngestionJobResponsePrivate::parseStartDataIngestionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDataIngestionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
