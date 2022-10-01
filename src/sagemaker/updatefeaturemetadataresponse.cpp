// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
