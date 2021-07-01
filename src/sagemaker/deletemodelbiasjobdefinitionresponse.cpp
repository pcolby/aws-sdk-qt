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

#include "deletemodelbiasjobdefinitionresponse.h"
#include "deletemodelbiasjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelBiasJobDefinitionResponse
 * \brief The DeleteModelBiasJobDefinitionResponse class provides an interace for SageMaker DeleteModelBiasJobDefinition responses.
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
 * \sa SageMakerClient::deleteModelBiasJobDefinition
 */

/*!
 * Constructs a DeleteModelBiasJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelBiasJobDefinitionResponse::DeleteModelBiasJobDefinitionResponse(
        const DeleteModelBiasJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelBiasJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelBiasJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelBiasJobDefinitionRequest * DeleteModelBiasJobDefinitionResponse::request() const
{
    Q_D(const DeleteModelBiasJobDefinitionResponse);
    return static_cast<const DeleteModelBiasJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelBiasJobDefinition \a response.
 */
void DeleteModelBiasJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelBiasJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelBiasJobDefinitionResponsePrivate
 * \brief The DeleteModelBiasJobDefinitionResponsePrivate class provides private implementation for DeleteModelBiasJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelBiasJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteModelBiasJobDefinitionResponsePrivate::DeleteModelBiasJobDefinitionResponsePrivate(
    DeleteModelBiasJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelBiasJobDefinition response element from \a xml.
 */
void DeleteModelBiasJobDefinitionResponsePrivate::parseDeleteModelBiasJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelBiasJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
