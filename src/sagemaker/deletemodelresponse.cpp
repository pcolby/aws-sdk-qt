// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelresponse.h"
#include "deletemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelResponse
 * \brief The DeleteModelResponse class provides an interace for SageMaker DeleteModel responses.
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
 * \sa SageMakerClient::deleteModel
 */

/*!
 * Constructs a DeleteModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelResponse::DeleteModelResponse(
        const DeleteModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelResponsePrivate(this), parent)
{
    setRequest(new DeleteModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelRequest * DeleteModelResponse::request() const
{
    Q_D(const DeleteModelResponse);
    return static_cast<const DeleteModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModel \a response.
 */
void DeleteModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelResponsePrivate
 * \brief The DeleteModelResponsePrivate class provides private implementation for DeleteModelResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelResponsePrivate object with public implementation \a q.
 */
DeleteModelResponsePrivate::DeleteModelResponsePrivate(
    DeleteModelResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModel response element from \a xml.
 */
void DeleteModelResponsePrivate::parseDeleteModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
