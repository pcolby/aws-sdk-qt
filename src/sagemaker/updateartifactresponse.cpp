// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateartifactresponse.h"
#include "updateartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateArtifactResponse
 * \brief The UpdateArtifactResponse class provides an interace for SageMaker UpdateArtifact responses.
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
 * \sa SageMakerClient::updateArtifact
 */

/*!
 * Constructs a UpdateArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateArtifactResponse::UpdateArtifactResponse(
        const UpdateArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateArtifactResponsePrivate(this), parent)
{
    setRequest(new UpdateArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateArtifactRequest * UpdateArtifactResponse::request() const
{
    Q_D(const UpdateArtifactResponse);
    return static_cast<const UpdateArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateArtifact \a response.
 */
void UpdateArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateArtifactResponsePrivate
 * \brief The UpdateArtifactResponsePrivate class provides private implementation for UpdateArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateArtifactResponsePrivate object with public implementation \a q.
 */
UpdateArtifactResponsePrivate::UpdateArtifactResponsePrivate(
    UpdateArtifactResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateArtifact response element from \a xml.
 */
void UpdateArtifactResponsePrivate::parseUpdateArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
