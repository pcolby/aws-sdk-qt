// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimageresponse.h"
#include "createimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateImageResponse
 * \brief The CreateImageResponse class provides an interace for SageMaker CreateImage responses.
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
 * \sa SageMakerClient::createImage
 */

/*!
 * Constructs a CreateImageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageResponse::CreateImageResponse(
        const CreateImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateImageResponsePrivate(this), parent)
{
    setRequest(new CreateImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageRequest * CreateImageResponse::request() const
{
    Q_D(const CreateImageResponse);
    return static_cast<const CreateImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateImage \a response.
 */
void CreateImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateImageResponsePrivate
 * \brief The CreateImageResponsePrivate class provides private implementation for CreateImageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateImageResponsePrivate object with public implementation \a q.
 */
CreateImageResponsePrivate::CreateImageResponsePrivate(
    CreateImageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateImage response element from \a xml.
 */
void CreateImageResponsePrivate::parseCreateImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
