// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicefleetreportresponse.h"
#include "getdevicefleetreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetDeviceFleetReportResponse
 * \brief The GetDeviceFleetReportResponse class provides an interace for SageMaker GetDeviceFleetReport responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::getDeviceFleetReport
 */

/*!
 * Constructs a GetDeviceFleetReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceFleetReportResponse::GetDeviceFleetReportResponse(
        const GetDeviceFleetReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new GetDeviceFleetReportResponsePrivate(this), parent)
{
    setRequest(new GetDeviceFleetReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceFleetReportRequest * GetDeviceFleetReportResponse::request() const
{
    Q_D(const GetDeviceFleetReportResponse);
    return static_cast<const GetDeviceFleetReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker GetDeviceFleetReport \a response.
 */
void GetDeviceFleetReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceFleetReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::GetDeviceFleetReportResponsePrivate
 * \brief The GetDeviceFleetReportResponsePrivate class provides private implementation for GetDeviceFleetReportResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetDeviceFleetReportResponsePrivate object with public implementation \a q.
 */
GetDeviceFleetReportResponsePrivate::GetDeviceFleetReportResponsePrivate(
    GetDeviceFleetReportResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker GetDeviceFleetReport response element from \a xml.
 */
void GetDeviceFleetReportResponsePrivate::parseGetDeviceFleetReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceFleetReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
