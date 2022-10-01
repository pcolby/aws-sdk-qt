// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createactionresponse.h"
#include "createactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateActionResponse
 * \brief The CreateActionResponse class provides an interace for SageMaker CreateAction responses.
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
 * \sa SageMakerClient::createAction
 */

/*!
 * Constructs a CreateActionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateActionResponse::CreateActionResponse(
        const CreateActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateActionResponsePrivate(this), parent)
{
    setRequest(new CreateActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateActionRequest * CreateActionResponse::request() const
{
    Q_D(const CreateActionResponse);
    return static_cast<const CreateActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateAction \a response.
 */
void CreateActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateActionResponsePrivate
 * \brief The CreateActionResponsePrivate class provides private implementation for CreateActionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateActionResponsePrivate object with public implementation \a q.
 */
CreateActionResponsePrivate::CreateActionResponsePrivate(
    CreateActionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateAction response element from \a xml.
 */
void CreateActionResponsePrivate::parseCreateActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
