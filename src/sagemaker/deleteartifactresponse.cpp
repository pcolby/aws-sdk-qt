// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteartifactresponse.h"
#include "deleteartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteArtifactResponse
 * \brief The DeleteArtifactResponse class provides an interace for SageMaker DeleteArtifact responses.
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
 * \sa SageMakerClient::deleteArtifact
 */

/*!
 * Constructs a DeleteArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteArtifactResponse::DeleteArtifactResponse(
        const DeleteArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteArtifactResponsePrivate(this), parent)
{
    setRequest(new DeleteArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteArtifactRequest * DeleteArtifactResponse::request() const
{
    Q_D(const DeleteArtifactResponse);
    return static_cast<const DeleteArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteArtifact \a response.
 */
void DeleteArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteArtifactResponsePrivate
 * \brief The DeleteArtifactResponsePrivate class provides private implementation for DeleteArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteArtifactResponsePrivate object with public implementation \a q.
 */
DeleteArtifactResponsePrivate::DeleteArtifactResponsePrivate(
    DeleteArtifactResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteArtifact response element from \a xml.
 */
void DeleteArtifactResponsePrivate::parseDeleteArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
