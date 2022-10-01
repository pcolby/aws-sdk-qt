// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdetectormodelanalysisresponse.h"
#include "startdetectormodelanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::StartDetectorModelAnalysisResponse
 * \brief The StartDetectorModelAnalysisResponse class provides an interace for IoTEvents StartDetectorModelAnalysis responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::startDetectorModelAnalysis
 */

/*!
 * Constructs a StartDetectorModelAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
StartDetectorModelAnalysisResponse::StartDetectorModelAnalysisResponse(
        const StartDetectorModelAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new StartDetectorModelAnalysisResponsePrivate(this), parent)
{
    setRequest(new StartDetectorModelAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDetectorModelAnalysisRequest * StartDetectorModelAnalysisResponse::request() const
{
    Q_D(const StartDetectorModelAnalysisResponse);
    return static_cast<const StartDetectorModelAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents StartDetectorModelAnalysis \a response.
 */
void StartDetectorModelAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDetectorModelAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::StartDetectorModelAnalysisResponsePrivate
 * \brief The StartDetectorModelAnalysisResponsePrivate class provides private implementation for StartDetectorModelAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a StartDetectorModelAnalysisResponsePrivate object with public implementation \a q.
 */
StartDetectorModelAnalysisResponsePrivate::StartDetectorModelAnalysisResponsePrivate(
    StartDetectorModelAnalysisResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents StartDetectorModelAnalysis response element from \a xml.
 */
void StartDetectorModelAnalysisResponsePrivate::parseStartDetectorModelAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDetectorModelAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
