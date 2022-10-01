// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrialresponse.h"
#include "createtrialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrialResponse
 * \brief The CreateTrialResponse class provides an interace for SageMaker CreateTrial responses.
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
 * \sa SageMakerClient::createTrial
 */

/*!
 * Constructs a CreateTrialResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrialResponse::CreateTrialResponse(
        const CreateTrialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTrialResponsePrivate(this), parent)
{
    setRequest(new CreateTrialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrialRequest * CreateTrialResponse::request() const
{
    Q_D(const CreateTrialResponse);
    return static_cast<const CreateTrialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTrial \a response.
 */
void CreateTrialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTrialResponsePrivate
 * \brief The CreateTrialResponsePrivate class provides private implementation for CreateTrialResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrialResponsePrivate object with public implementation \a q.
 */
CreateTrialResponsePrivate::CreateTrialResponsePrivate(
    CreateTrialResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTrial response element from \a xml.
 */
void CreateTrialResponsePrivate::parseCreateTrialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
