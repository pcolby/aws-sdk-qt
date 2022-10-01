// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdetectormodelanalysisresultsresponse.h"
#include "getdetectormodelanalysisresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::GetDetectorModelAnalysisResultsResponse
 * \brief The GetDetectorModelAnalysisResultsResponse class provides an interace for IoTEvents GetDetectorModelAnalysisResults responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::getDetectorModelAnalysisResults
 */

/*!
 * Constructs a GetDetectorModelAnalysisResultsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDetectorModelAnalysisResultsResponse::GetDetectorModelAnalysisResultsResponse(
        const GetDetectorModelAnalysisResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new GetDetectorModelAnalysisResultsResponsePrivate(this), parent)
{
    setRequest(new GetDetectorModelAnalysisResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDetectorModelAnalysisResultsRequest * GetDetectorModelAnalysisResultsResponse::request() const
{
    Q_D(const GetDetectorModelAnalysisResultsResponse);
    return static_cast<const GetDetectorModelAnalysisResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents GetDetectorModelAnalysisResults \a response.
 */
void GetDetectorModelAnalysisResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDetectorModelAnalysisResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::GetDetectorModelAnalysisResultsResponsePrivate
 * \brief The GetDetectorModelAnalysisResultsResponsePrivate class provides private implementation for GetDetectorModelAnalysisResultsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a GetDetectorModelAnalysisResultsResponsePrivate object with public implementation \a q.
 */
GetDetectorModelAnalysisResultsResponsePrivate::GetDetectorModelAnalysisResultsResponsePrivate(
    GetDetectorModelAnalysisResultsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents GetDetectorModelAnalysisResults response element from \a xml.
 */
void GetDetectorModelAnalysisResultsResponsePrivate::parseGetDetectorModelAnalysisResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDetectorModelAnalysisResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
