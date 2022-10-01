// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrialcomponentresponse.h"
#include "createtrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrialComponentResponse
 * \brief The CreateTrialComponentResponse class provides an interace for SageMaker CreateTrialComponent responses.
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
 * \sa SageMakerClient::createTrialComponent
 */

/*!
 * Constructs a CreateTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrialComponentResponse::CreateTrialComponentResponse(
        const CreateTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTrialComponentResponsePrivate(this), parent)
{
    setRequest(new CreateTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrialComponentRequest * CreateTrialComponentResponse::request() const
{
    Q_D(const CreateTrialComponentResponse);
    return static_cast<const CreateTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTrialComponent \a response.
 */
void CreateTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTrialComponentResponsePrivate
 * \brief The CreateTrialComponentResponsePrivate class provides private implementation for CreateTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrialComponentResponsePrivate object with public implementation \a q.
 */
CreateTrialComponentResponsePrivate::CreateTrialComponentResponsePrivate(
    CreateTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTrialComponent response element from \a xml.
 */
void CreateTrialComponentResponsePrivate::parseCreateTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
