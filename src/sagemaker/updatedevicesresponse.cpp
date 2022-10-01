// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
