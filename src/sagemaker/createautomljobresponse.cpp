// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createautomljobresponse.h"
#include "createautomljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAutoMLJobResponse
 * \brief The CreateAutoMLJobResponse class provides an interace for SageMaker CreateAutoMLJob responses.
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
 * \sa SageMakerClient::createAutoMLJob
 */

/*!
 * Constructs a CreateAutoMLJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAutoMLJobResponse::CreateAutoMLJobResponse(
        const CreateAutoMLJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateAutoMLJobResponsePrivate(this), parent)
{
    setRequest(new CreateAutoMLJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAutoMLJobRequest * CreateAutoMLJobResponse::request() const
{
    Q_D(const CreateAutoMLJobResponse);
    return static_cast<const CreateAutoMLJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateAutoMLJob \a response.
 */
void CreateAutoMLJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAutoMLJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateAutoMLJobResponsePrivate
 * \brief The CreateAutoMLJobResponsePrivate class provides private implementation for CreateAutoMLJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAutoMLJobResponsePrivate object with public implementation \a q.
 */
CreateAutoMLJobResponsePrivate::CreateAutoMLJobResponsePrivate(
    CreateAutoMLJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateAutoMLJob response element from \a xml.
 */
void CreateAutoMLJobResponsePrivate::parseCreateAutoMLJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAutoMLJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
