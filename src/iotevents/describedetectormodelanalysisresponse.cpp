// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
