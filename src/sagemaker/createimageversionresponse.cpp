// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimageversionresponse.h"
#include "createimageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateImageVersionResponse
 * \brief The CreateImageVersionResponse class provides an interace for SageMaker CreateImageVersion responses.
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
 * \sa SageMakerClient::createImageVersion
 */

/*!
 * Constructs a CreateImageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageVersionResponse::CreateImageVersionResponse(
        const CreateImageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateImageVersionResponsePrivate(this), parent)
{
    setRequest(new CreateImageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageVersionRequest * CreateImageVersionResponse::request() const
{
    Q_D(const CreateImageVersionResponse);
    return static_cast<const CreateImageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateImageVersion \a response.
 */
void CreateImageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateImageVersionResponsePrivate
 * \brief The CreateImageVersionResponsePrivate class provides private implementation for CreateImageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateImageVersionResponsePrivate object with public implementation \a q.
 */
CreateImageVersionResponsePrivate::CreateImageVersionResponsePrivate(
    CreateImageVersionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateImageVersion response element from \a xml.
 */
void CreateImageVersionResponsePrivate::parseCreateImageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
