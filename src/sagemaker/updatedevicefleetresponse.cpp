// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
