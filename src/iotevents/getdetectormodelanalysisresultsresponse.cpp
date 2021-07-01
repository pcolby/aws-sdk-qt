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
