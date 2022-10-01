// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealgorithmresponse.h"
#include "deletealgorithmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAlgorithmResponse
 * \brief The DeleteAlgorithmResponse class provides an interace for SageMaker DeleteAlgorithm responses.
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
 * \sa SageMakerClient::deleteAlgorithm
 */

/*!
 * Constructs a DeleteAlgorithmResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlgorithmResponse::DeleteAlgorithmResponse(
        const DeleteAlgorithmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteAlgorithmResponsePrivate(this), parent)
{
    setRequest(new DeleteAlgorithmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlgorithmRequest * DeleteAlgorithmResponse::request() const
{
    Q_D(const DeleteAlgorithmResponse);
    return static_cast<const DeleteAlgorithmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteAlgorithm \a response.
 */
void DeleteAlgorithmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlgorithmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteAlgorithmResponsePrivate
 * \brief The DeleteAlgorithmResponsePrivate class provides private implementation for DeleteAlgorithmResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAlgorithmResponsePrivate object with public implementation \a q.
 */
DeleteAlgorithmResponsePrivate::DeleteAlgorithmResponsePrivate(
    DeleteAlgorithmResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteAlgorithm response element from \a xml.
 */
void DeleteAlgorithmResponsePrivate::parseDeleteAlgorithmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlgorithmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
