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

#include "describedetectormodelanalysisresponse.h"
#include "describedetectormodelanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelAnalysisResponse
 * \brief The DescribeDetectorModelAnalysisResponse class provides an interace for IoTEvents DescribeDetectorModelAnalysis responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeDetectorModelAnalysis
 */

/*!
 * Constructs a DescribeDetectorModelAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDetectorModelAnalysisResponse::DescribeDetectorModelAnalysisResponse(
        const DescribeDetectorModelAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DescribeDetectorModelAnalysisResponsePrivate(this), parent)
{
    setRequest(new DescribeDetectorModelAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDetectorModelAnalysisRequest * DescribeDetectorModelAnalysisResponse::request() const
{
    Q_D(const DescribeDetectorModelAnalysisResponse);
    return static_cast<const DescribeDetectorModelAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DescribeDetectorModelAnalysis \a response.
 */
void DescribeDetectorModelAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDetectorModelAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelAnalysisResponsePrivate
 * \brief The DescribeDetectorModelAnalysisResponsePrivate class provides private implementation for DescribeDetectorModelAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeDetectorModelAnalysisResponsePrivate object with public implementation \a q.
 */
DescribeDetectorModelAnalysisResponsePrivate::DescribeDetectorModelAnalysisResponsePrivate(
    DescribeDetectorModelAnalysisResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DescribeDetectorModelAnalysis response element from \a xml.
 */
void DescribeDetectorModelAnalysisResponsePrivate::parseDescribeDetectorModelAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDetectorModelAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
