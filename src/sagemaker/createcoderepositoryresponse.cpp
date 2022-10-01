// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcoderepositoryresponse.h"
#include "createcoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryResponse
 * \brief The CreateCodeRepositoryResponse class provides an interace for SageMaker CreateCodeRepository responses.
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
 * \sa SageMakerClient::createCodeRepository
 */

/*!
 * Constructs a CreateCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCodeRepositoryResponse::CreateCodeRepositoryResponse(
        const CreateCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new CreateCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCodeRepositoryRequest * CreateCodeRepositoryResponse::request() const
{
    Q_D(const CreateCodeRepositoryResponse);
    return static_cast<const CreateCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateCodeRepository \a response.
 */
void CreateCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryResponsePrivate
 * \brief The CreateCodeRepositoryResponsePrivate class provides private implementation for CreateCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateCodeRepositoryResponsePrivate object with public implementation \a q.
 */
CreateCodeRepositoryResponsePrivate::CreateCodeRepositoryResponsePrivate(
    CreateCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateCodeRepository response element from \a xml.
 */
void CreateCodeRepositoryResponsePrivate::parseCreateCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
