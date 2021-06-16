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
