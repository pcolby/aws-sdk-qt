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

#include "createhumantaskuiresponse.h"
#include "createhumantaskuiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateHumanTaskUiResponse
 * \brief The CreateHumanTaskUiResponse class provides an interace for SageMaker CreateHumanTaskUi responses.
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
 * \sa SageMakerClient::createHumanTaskUi
 */

/*!
 * Constructs a CreateHumanTaskUiResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHumanTaskUiResponse::CreateHumanTaskUiResponse(
        const CreateHumanTaskUiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateHumanTaskUiResponsePrivate(this), parent)
{
    setRequest(new CreateHumanTaskUiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHumanTaskUiRequest * CreateHumanTaskUiResponse::request() const
{
    Q_D(const CreateHumanTaskUiResponse);
    return static_cast<const CreateHumanTaskUiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateHumanTaskUi \a response.
 */
void CreateHumanTaskUiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHumanTaskUiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateHumanTaskUiResponsePrivate
 * \brief The CreateHumanTaskUiResponsePrivate class provides private implementation for CreateHumanTaskUiResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateHumanTaskUiResponsePrivate object with public implementation \a q.
 */
CreateHumanTaskUiResponsePrivate::CreateHumanTaskUiResponsePrivate(
    CreateHumanTaskUiResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateHumanTaskUi response element from \a xml.
 */
void CreateHumanTaskUiResponsePrivate::parseCreateHumanTaskUiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHumanTaskUiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
