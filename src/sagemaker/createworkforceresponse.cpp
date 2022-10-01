// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkforceresponse.h"
#include "createworkforceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkforceResponse
 * \brief The CreateWorkforceResponse class provides an interace for SageMaker CreateWorkforce responses.
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
 * \sa SageMakerClient::createWorkforce
 */

/*!
 * Constructs a CreateWorkforceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkforceResponse::CreateWorkforceResponse(
        const CreateWorkforceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateWorkforceResponsePrivate(this), parent)
{
    setRequest(new CreateWorkforceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkforceRequest * CreateWorkforceResponse::request() const
{
    Q_D(const CreateWorkforceResponse);
    return static_cast<const CreateWorkforceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateWorkforce \a response.
 */
void CreateWorkforceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkforceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateWorkforceResponsePrivate
 * \brief The CreateWorkforceResponsePrivate class provides private implementation for CreateWorkforceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkforceResponsePrivate object with public implementation \a q.
 */
CreateWorkforceResponsePrivate::CreateWorkforceResponsePrivate(
    CreateWorkforceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateWorkforce response element from \a xml.
 */
void CreateWorkforceResponsePrivate::parseCreateWorkforceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkforceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
