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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
