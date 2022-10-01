// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresigneddomainurlresponse.h"
#include "createpresigneddomainurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePresignedDomainUrlResponse
 * \brief The CreatePresignedDomainUrlResponse class provides an interace for SageMaker CreatePresignedDomainUrl responses.
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
 * \sa SageMakerClient::createPresignedDomainUrl
 */

/*!
 * Constructs a CreatePresignedDomainUrlResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePresignedDomainUrlResponse::CreatePresignedDomainUrlResponse(
        const CreatePresignedDomainUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreatePresignedDomainUrlResponsePrivate(this), parent)
{
    setRequest(new CreatePresignedDomainUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePresignedDomainUrlRequest * CreatePresignedDomainUrlResponse::request() const
{
    Q_D(const CreatePresignedDomainUrlResponse);
    return static_cast<const CreatePresignedDomainUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreatePresignedDomainUrl \a response.
 */
void CreatePresignedDomainUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePresignedDomainUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreatePresignedDomainUrlResponsePrivate
 * \brief The CreatePresignedDomainUrlResponsePrivate class provides private implementation for CreatePresignedDomainUrlResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePresignedDomainUrlResponsePrivate object with public implementation \a q.
 */
CreatePresignedDomainUrlResponsePrivate::CreatePresignedDomainUrlResponsePrivate(
    CreatePresignedDomainUrlResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreatePresignedDomainUrl response element from \a xml.
 */
void CreatePresignedDomainUrlResponsePrivate::parseCreatePresignedDomainUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresignedDomainUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
