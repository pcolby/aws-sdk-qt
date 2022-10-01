// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevicefleetresponse.h"
#include "deletedevicefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDeviceFleetResponse
 * \brief The DeleteDeviceFleetResponse class provides an interace for SageMaker DeleteDeviceFleet responses.
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
 * \sa SageMakerClient::deleteDeviceFleet
 */

/*!
 * Constructs a DeleteDeviceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceFleetResponse::DeleteDeviceFleetResponse(
        const DeleteDeviceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteDeviceFleetResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceFleetRequest * DeleteDeviceFleetResponse::request() const
{
    Q_D(const DeleteDeviceFleetResponse);
    return static_cast<const DeleteDeviceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteDeviceFleet \a response.
 */
void DeleteDeviceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteDeviceFleetResponsePrivate
 * \brief The DeleteDeviceFleetResponsePrivate class provides private implementation for DeleteDeviceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDeviceFleetResponsePrivate object with public implementation \a q.
 */
DeleteDeviceFleetResponsePrivate::DeleteDeviceFleetResponsePrivate(
    DeleteDeviceFleetResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteDeviceFleet response element from \a xml.
 */
void DeleteDeviceFleetResponsePrivate::parseDeleteDeviceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
