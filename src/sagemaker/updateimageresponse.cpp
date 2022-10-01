// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateimageresponse.h"
#include "updateimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateImageResponse
 * \brief The UpdateImageResponse class provides an interace for SageMaker UpdateImage responses.
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
 * \sa SageMakerClient::updateImage
 */

/*!
 * Constructs a UpdateImageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateImageResponse::UpdateImageResponse(
        const UpdateImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateImageResponsePrivate(this), parent)
{
    setRequest(new UpdateImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateImageRequest * UpdateImageResponse::request() const
{
    Q_D(const UpdateImageResponse);
    return static_cast<const UpdateImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateImage \a response.
 */
void UpdateImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateImageResponsePrivate
 * \brief The UpdateImageResponsePrivate class provides private implementation for UpdateImageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateImageResponsePrivate object with public implementation \a q.
 */
UpdateImageResponsePrivate::UpdateImageResponsePrivate(
    UpdateImageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateImage response element from \a xml.
 */
void UpdateImageResponsePrivate::parseUpdateImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
