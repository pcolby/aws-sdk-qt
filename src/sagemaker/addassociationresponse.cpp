// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
