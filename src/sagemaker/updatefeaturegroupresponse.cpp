// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefeaturegroupresponse.h"
#include "updatefeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateFeatureGroupResponse
 * \brief The UpdateFeatureGroupResponse class provides an interace for SageMaker UpdateFeatureGroup responses.
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
 * \sa SageMakerClient::updateFeatureGroup
 */

/*!
 * Constructs a UpdateFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFeatureGroupResponse::UpdateFeatureGroupResponse(
        const UpdateFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFeatureGroupRequest * UpdateFeatureGroupResponse::request() const
{
    Q_D(const UpdateFeatureGroupResponse);
    return static_cast<const UpdateFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateFeatureGroup \a response.
 */
void UpdateFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateFeatureGroupResponsePrivate
 * \brief The UpdateFeatureGroupResponsePrivate class provides private implementation for UpdateFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateFeatureGroupResponsePrivate object with public implementation \a q.
 */
UpdateFeatureGroupResponsePrivate::UpdateFeatureGroupResponsePrivate(
    UpdateFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateFeatureGroup response element from \a xml.
 */
void UpdateFeatureGroupResponsePrivate::parseUpdateFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
