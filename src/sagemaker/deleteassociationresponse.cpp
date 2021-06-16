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

#include "deleteassociationresponse.h"
#include "deleteassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAssociationResponse
 * \brief The DeleteAssociationResponse class provides an interace for SageMaker DeleteAssociation responses.
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
 * \sa SageMakerClient::deleteAssociation
 */

/*!
 * Constructs a DeleteAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAssociationResponse::DeleteAssociationResponse(
        const DeleteAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAssociationRequest * DeleteAssociationResponse::request() const
{
    Q_D(const DeleteAssociationResponse);
    return static_cast<const DeleteAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteAssociation \a response.
 */
void DeleteAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteAssociationResponsePrivate
 * \brief The DeleteAssociationResponsePrivate class provides private implementation for DeleteAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAssociationResponsePrivate object with public implementation \a q.
 */
DeleteAssociationResponsePrivate::DeleteAssociationResponsePrivate(
    DeleteAssociationResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteAssociation response element from \a xml.
 */
void DeleteAssociationResponsePrivate::parseDeleteAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
