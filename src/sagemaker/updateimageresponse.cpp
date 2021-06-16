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
