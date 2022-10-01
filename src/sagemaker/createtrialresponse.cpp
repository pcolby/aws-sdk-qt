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

#include "createtrialresponse.h"
#include "createtrialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrialResponse
 * \brief The CreateTrialResponse class provides an interace for SageMaker CreateTrial responses.
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
 * \sa SageMakerClient::createTrial
 */

/*!
 * Constructs a CreateTrialResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrialResponse::CreateTrialResponse(
        const CreateTrialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTrialResponsePrivate(this), parent)
{
    setRequest(new CreateTrialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrialRequest * CreateTrialResponse::request() const
{
    Q_D(const CreateTrialResponse);
    return static_cast<const CreateTrialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTrial \a response.
 */
void CreateTrialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTrialResponsePrivate
 * \brief The CreateTrialResponsePrivate class provides private implementation for CreateTrialResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrialResponsePrivate object with public implementation \a q.
 */
CreateTrialResponsePrivate::CreateTrialResponsePrivate(
    CreateTrialResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTrial response element from \a xml.
 */
void CreateTrialResponsePrivate::parseCreateTrialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
