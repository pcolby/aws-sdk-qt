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

#include "updatedevicefleetresponse.h"
#include "updatedevicefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateDeviceFleetResponse
 * \brief The UpdateDeviceFleetResponse class provides an interace for SageMaker UpdateDeviceFleet responses.
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
 * \sa SageMakerClient::updateDeviceFleet
 */

/*!
 * Constructs a UpdateDeviceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceFleetResponse::UpdateDeviceFleetResponse(
        const UpdateDeviceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateDeviceFleetResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceFleetRequest * UpdateDeviceFleetResponse::request() const
{
    Q_D(const UpdateDeviceFleetResponse);
    return static_cast<const UpdateDeviceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateDeviceFleet \a response.
 */
void UpdateDeviceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateDeviceFleetResponsePrivate
 * \brief The UpdateDeviceFleetResponsePrivate class provides private implementation for UpdateDeviceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateDeviceFleetResponsePrivate object with public implementation \a q.
 */
UpdateDeviceFleetResponsePrivate::UpdateDeviceFleetResponsePrivate(
    UpdateDeviceFleetResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateDeviceFleet response element from \a xml.
 */
void UpdateDeviceFleetResponsePrivate::parseUpdateDeviceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
