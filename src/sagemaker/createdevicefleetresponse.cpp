// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicefleetresponse.h"
#include "createdevicefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateDeviceFleetResponse
 * \brief The CreateDeviceFleetResponse class provides an interace for SageMaker CreateDeviceFleet responses.
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
 * \sa SageMakerClient::createDeviceFleet
 */

/*!
 * Constructs a CreateDeviceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceFleetResponse::CreateDeviceFleetResponse(
        const CreateDeviceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateDeviceFleetResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceFleetRequest * CreateDeviceFleetResponse::request() const
{
    Q_D(const CreateDeviceFleetResponse);
    return static_cast<const CreateDeviceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateDeviceFleet \a response.
 */
void CreateDeviceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateDeviceFleetResponsePrivate
 * \brief The CreateDeviceFleetResponsePrivate class provides private implementation for CreateDeviceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateDeviceFleetResponsePrivate object with public implementation \a q.
 */
CreateDeviceFleetResponsePrivate::CreateDeviceFleetResponsePrivate(
    CreateDeviceFleetResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateDeviceFleet response element from \a xml.
 */
void CreateDeviceFleetResponsePrivate::parseCreateDeviceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
