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

#include "deletedataqualityjobdefinitionresponse.h"
#include "deletedataqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDataQualityJobDefinitionResponse
 * \brief The DeleteDataQualityJobDefinitionResponse class provides an interace for SageMaker DeleteDataQualityJobDefinition responses.
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
 * \sa SageMakerClient::deleteDataQualityJobDefinition
 */

/*!
 * Constructs a DeleteDataQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataQualityJobDefinitionResponse::DeleteDataQualityJobDefinitionResponse(
        const DeleteDataQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteDataQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteDataQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataQualityJobDefinitionRequest * DeleteDataQualityJobDefinitionResponse::request() const
{
    Q_D(const DeleteDataQualityJobDefinitionResponse);
    return static_cast<const DeleteDataQualityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteDataQualityJobDefinition \a response.
 */
void DeleteDataQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteDataQualityJobDefinitionResponsePrivate
 * \brief The DeleteDataQualityJobDefinitionResponsePrivate class provides private implementation for DeleteDataQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDataQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteDataQualityJobDefinitionResponsePrivate::DeleteDataQualityJobDefinitionResponsePrivate(
    DeleteDataQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteDataQualityJobDefinition response element from \a xml.
 */
void DeleteDataQualityJobDefinitionResponsePrivate::parseDeleteDataQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
