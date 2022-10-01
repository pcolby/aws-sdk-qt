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

#include "createimageversionresponse.h"
#include "createimageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateImageVersionResponse
 * \brief The CreateImageVersionResponse class provides an interace for SageMaker CreateImageVersion responses.
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
 * \sa SageMakerClient::createImageVersion
 */

/*!
 * Constructs a CreateImageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageVersionResponse::CreateImageVersionResponse(
        const CreateImageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateImageVersionResponsePrivate(this), parent)
{
    setRequest(new CreateImageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageVersionRequest * CreateImageVersionResponse::request() const
{
    Q_D(const CreateImageVersionResponse);
    return static_cast<const CreateImageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateImageVersion \a response.
 */
void CreateImageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateImageVersionResponsePrivate
 * \brief The CreateImageVersionResponsePrivate class provides private implementation for CreateImageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateImageVersionResponsePrivate object with public implementation \a q.
 */
CreateImageVersionResponsePrivate::CreateImageVersionResponsePrivate(
    CreateImageVersionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateImageVersion response element from \a xml.
 */
void CreateImageVersionResponsePrivate::parseCreateImageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
