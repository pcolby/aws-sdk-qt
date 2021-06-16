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

#include "createcontextresponse.h"
#include "createcontextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateContextResponse
 * \brief The CreateContextResponse class provides an interace for SageMaker CreateContext responses.
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
 * \sa SageMakerClient::createContext
 */

/*!
 * Constructs a CreateContextResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContextResponse::CreateContextResponse(
        const CreateContextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateContextResponsePrivate(this), parent)
{
    setRequest(new CreateContextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContextRequest * CreateContextResponse::request() const
{
    Q_D(const CreateContextResponse);
    return static_cast<const CreateContextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateContext \a response.
 */
void CreateContextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateContextResponsePrivate
 * \brief The CreateContextResponsePrivate class provides private implementation for CreateContextResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateContextResponsePrivate object with public implementation \a q.
 */
CreateContextResponsePrivate::CreateContextResponsePrivate(
    CreateContextResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateContext response element from \a xml.
 */
void CreateContextResponsePrivate::parseCreateContextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
