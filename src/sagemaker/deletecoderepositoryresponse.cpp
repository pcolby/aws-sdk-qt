// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecoderepositoryresponse.h"
#include "deletecoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryResponse
 * \brief The DeleteCodeRepositoryResponse class provides an interace for SageMaker DeleteCodeRepository responses.
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
 * \sa SageMakerClient::deleteCodeRepository
 */

/*!
 * Constructs a DeleteCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCodeRepositoryResponse::DeleteCodeRepositoryResponse(
        const DeleteCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new DeleteCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCodeRepositoryRequest * DeleteCodeRepositoryResponse::request() const
{
    Q_D(const DeleteCodeRepositoryResponse);
    return static_cast<const DeleteCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteCodeRepository \a response.
 */
void DeleteCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryResponsePrivate
 * \brief The DeleteCodeRepositoryResponsePrivate class provides private implementation for DeleteCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteCodeRepositoryResponsePrivate object with public implementation \a q.
 */
DeleteCodeRepositoryResponsePrivate::DeleteCodeRepositoryResponsePrivate(
    DeleteCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteCodeRepository response element from \a xml.
 */
void DeleteCodeRepositoryResponsePrivate::parseDeleteCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
