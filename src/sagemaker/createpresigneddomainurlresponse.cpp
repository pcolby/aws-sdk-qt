/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
