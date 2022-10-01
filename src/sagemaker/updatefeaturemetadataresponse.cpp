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

#include "updatefeaturemetadataresponse.h"
#include "updatefeaturemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateFeatureMetadataResponse
 * \brief The UpdateFeatureMetadataResponse class provides an interace for SageMaker UpdateFeatureMetadata responses.
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
 * \sa SageMakerClient::updateFeatureMetadata
 */

/*!
 * Constructs a UpdateFeatureMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFeatureMetadataResponse::UpdateFeatureMetadataResponse(
        const UpdateFeatureMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateFeatureMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateFeatureMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFeatureMetadataRequest * UpdateFeatureMetadataResponse::request() const
{
    Q_D(const UpdateFeatureMetadataResponse);
    return static_cast<const UpdateFeatureMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateFeatureMetadata \a response.
 */
void UpdateFeatureMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFeatureMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateFeatureMetadataResponsePrivate
 * \brief The UpdateFeatureMetadataResponsePrivate class provides private implementation for UpdateFeatureMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateFeatureMetadataResponsePrivate object with public implementation \a q.
 */
UpdateFeatureMetadataResponsePrivate::UpdateFeatureMetadataResponsePrivate(
    UpdateFeatureMetadataResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateFeatureMetadata response element from \a xml.
 */
void UpdateFeatureMetadataResponsePrivate::parseUpdateFeatureMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFeatureMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
