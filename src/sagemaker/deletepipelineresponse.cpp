// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepipelineresponse.h"
#include "deletepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeletePipelineResponse
 * \brief The DeletePipelineResponse class provides an interace for SageMaker DeletePipeline responses.
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
 * \sa SageMakerClient::deletePipeline
 */

/*!
 * Constructs a DeletePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePipelineResponse::DeletePipelineResponse(
        const DeletePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeletePipelineResponsePrivate(this), parent)
{
    setRequest(new DeletePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePipelineRequest * DeletePipelineResponse::request() const
{
    Q_D(const DeletePipelineResponse);
    return static_cast<const DeletePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeletePipeline \a response.
 */
void DeletePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeletePipelineResponsePrivate
 * \brief The DeletePipelineResponsePrivate class provides private implementation for DeletePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeletePipelineResponsePrivate object with public implementation \a q.
 */
DeletePipelineResponsePrivate::DeletePipelineResponsePrivate(
    DeletePipelineResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeletePipeline response element from \a xml.
 */
void DeletePipelineResponsePrivate::parseDeletePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
