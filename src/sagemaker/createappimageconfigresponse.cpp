// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappimageconfigresponse.h"
#include "createappimageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAppImageConfigResponse
 * \brief The CreateAppImageConfigResponse class provides an interace for SageMaker CreateAppImageConfig responses.
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
 * \sa SageMakerClient::createAppImageConfig
 */

/*!
 * Constructs a CreateAppImageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppImageConfigResponse::CreateAppImageConfigResponse(
        const CreateAppImageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateAppImageConfigResponsePrivate(this), parent)
{
    setRequest(new CreateAppImageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppImageConfigRequest * CreateAppImageConfigResponse::request() const
{
    Q_D(const CreateAppImageConfigResponse);
    return static_cast<const CreateAppImageConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateAppImageConfig \a response.
 */
void CreateAppImageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppImageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateAppImageConfigResponsePrivate
 * \brief The CreateAppImageConfigResponsePrivate class provides private implementation for CreateAppImageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAppImageConfigResponsePrivate object with public implementation \a q.
 */
CreateAppImageConfigResponsePrivate::CreateAppImageConfigResponsePrivate(
    CreateAppImageConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateAppImageConfig response element from \a xml.
 */
void CreateAppImageConfigResponsePrivate::parseCreateAppImageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppImageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
