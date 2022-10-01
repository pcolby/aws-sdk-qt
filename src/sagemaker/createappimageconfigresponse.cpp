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

#include "createappimageconfigresponse.h"
#include "createappimageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAppImageConfigResponse
 * \brief The CreateAppImageConfigResponse class provides an interace for SageMaker CreateAppImageConfig responses.
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
 * \sa SageMakerClient::createAppImageConfig
 */

/*!
 * Constructs a CreateAppImageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppImageConfigResponse::CreateAppImageConfigResponse(
        const CreateAppImageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateAppImageConfigResponsePrivate(this), parent)
{
    setRequest(new CreateAppImageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppImageConfigRequest * CreateAppImageConfigResponse::request() const
{
    Q_D(const CreateAppImageConfigResponse);
    return static_cast<const CreateAppImageConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateAppImageConfig \a response.
 */
void CreateAppImageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppImageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateAppImageConfigResponsePrivate
 * \brief The CreateAppImageConfigResponsePrivate class provides private implementation for CreateAppImageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAppImageConfigResponsePrivate object with public implementation \a q.
 */
CreateAppImageConfigResponsePrivate::CreateAppImageConfigResponsePrivate(
    CreateAppImageConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateAppImageConfig response element from \a xml.
 */
void CreateAppImageConfigResponsePrivate::parseCreateAppImageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppImageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
