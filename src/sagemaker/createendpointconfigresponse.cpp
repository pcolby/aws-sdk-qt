// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointconfigresponse.h"
#include "createendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEndpointConfigResponse
 * \brief The CreateEndpointConfigResponse class provides an interace for SageMaker CreateEndpointConfig responses.
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
 * \sa SageMakerClient::createEndpointConfig
 */

/*!
 * Constructs a CreateEndpointConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEndpointConfigResponse::CreateEndpointConfigResponse(
        const CreateEndpointConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEndpointConfigRequest * CreateEndpointConfigResponse::request() const
{
    Q_D(const CreateEndpointConfigResponse);
    return static_cast<const CreateEndpointConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateEndpointConfig \a response.
 */
void CreateEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEndpointConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateEndpointConfigResponsePrivate
 * \brief The CreateEndpointConfigResponsePrivate class provides private implementation for CreateEndpointConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEndpointConfigResponsePrivate object with public implementation \a q.
 */
CreateEndpointConfigResponsePrivate::CreateEndpointConfigResponsePrivate(
    CreateEndpointConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateEndpointConfig response element from \a xml.
 */
void CreateEndpointConfigResponsePrivate::parseCreateEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
