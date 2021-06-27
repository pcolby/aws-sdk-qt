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

#include "createworkforceresponse.h"
#include "createworkforceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkforceResponse
 * \brief The CreateWorkforceResponse class provides an interace for SageMaker CreateWorkforce responses.
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
 * \sa SageMakerClient::createWorkforce
 */

/*!
 * Constructs a CreateWorkforceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkforceResponse::CreateWorkforceResponse(
        const CreateWorkforceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateWorkforceResponsePrivate(this), parent)
{
    setRequest(new CreateWorkforceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkforceRequest * CreateWorkforceResponse::request() const
{
    return static_cast<const CreateWorkforceRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateWorkforce \a response.
 */
void CreateWorkforceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkforceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateWorkforceResponsePrivate
 * \brief The CreateWorkforceResponsePrivate class provides private implementation for CreateWorkforceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkforceResponsePrivate object with public implementation \a q.
 */
CreateWorkforceResponsePrivate::CreateWorkforceResponsePrivate(
    CreateWorkforceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateWorkforce response element from \a xml.
 */
void CreateWorkforceResponsePrivate::parseCreateWorkforceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkforceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
