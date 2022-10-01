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

#include "addassociationresponse.h"
#include "addassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::AddAssociationResponse
 * \brief The AddAssociationResponse class provides an interace for SageMaker AddAssociation responses.
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
 * \sa SageMakerClient::addAssociation
 */

/*!
 * Constructs a AddAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
AddAssociationResponse::AddAssociationResponse(
        const AddAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new AddAssociationResponsePrivate(this), parent)
{
    setRequest(new AddAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddAssociationRequest * AddAssociationResponse::request() const
{
    Q_D(const AddAssociationResponse);
    return static_cast<const AddAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker AddAssociation \a response.
 */
void AddAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::AddAssociationResponsePrivate
 * \brief The AddAssociationResponsePrivate class provides private implementation for AddAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a AddAssociationResponsePrivate object with public implementation \a q.
 */
AddAssociationResponsePrivate::AddAssociationResponsePrivate(
    AddAssociationResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker AddAssociation response element from \a xml.
 */
void AddAssociationResponsePrivate::parseAddAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
