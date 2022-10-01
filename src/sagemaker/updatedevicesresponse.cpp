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

#include "updatedevicesresponse.h"
#include "updatedevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateDevicesResponse
 * \brief The UpdateDevicesResponse class provides an interace for SageMaker UpdateDevices responses.
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
 * \sa SageMakerClient::updateDevices
 */

/*!
 * Constructs a UpdateDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevicesResponse::UpdateDevicesResponse(
        const UpdateDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateDevicesResponsePrivate(this), parent)
{
    setRequest(new UpdateDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevicesRequest * UpdateDevicesResponse::request() const
{
    Q_D(const UpdateDevicesResponse);
    return static_cast<const UpdateDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateDevices \a response.
 */
void UpdateDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateDevicesResponsePrivate
 * \brief The UpdateDevicesResponsePrivate class provides private implementation for UpdateDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateDevicesResponsePrivate object with public implementation \a q.
 */
UpdateDevicesResponsePrivate::UpdateDevicesResponsePrivate(
    UpdateDevicesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateDevices response element from \a xml.
 */
void UpdateDevicesResponsePrivate::parseUpdateDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
