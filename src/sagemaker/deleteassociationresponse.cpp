// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
