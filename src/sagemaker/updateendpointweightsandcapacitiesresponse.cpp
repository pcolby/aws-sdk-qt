// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointweightsandcapacitiesresponse.h"
#include "updateendpointweightsandcapacitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateEndpointWeightsAndCapacitiesResponse
 * \brief The UpdateEndpointWeightsAndCapacitiesResponse class provides an interace for SageMaker UpdateEndpointWeightsAndCapacities responses.
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
 * \sa SageMakerClient::updateEndpointWeightsAndCapacities
 */

/*!
 * Constructs a UpdateEndpointWeightsAndCapacitiesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEndpointWeightsAndCapacitiesResponse::UpdateEndpointWeightsAndCapacitiesResponse(
        const UpdateEndpointWeightsAndCapacitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateEndpointWeightsAndCapacitiesResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointWeightsAndCapacitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEndpointWeightsAndCapacitiesRequest * UpdateEndpointWeightsAndCapacitiesResponse::request() const
{
    Q_D(const UpdateEndpointWeightsAndCapacitiesResponse);
    return static_cast<const UpdateEndpointWeightsAndCapacitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateEndpointWeightsAndCapacities \a response.
 */
void UpdateEndpointWeightsAndCapacitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEndpointWeightsAndCapacitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateEndpointWeightsAndCapacitiesResponsePrivate
 * \brief The UpdateEndpointWeightsAndCapacitiesResponsePrivate class provides private implementation for UpdateEndpointWeightsAndCapacitiesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateEndpointWeightsAndCapacitiesResponsePrivate object with public implementation \a q.
 */
UpdateEndpointWeightsAndCapacitiesResponsePrivate::UpdateEndpointWeightsAndCapacitiesResponsePrivate(
    UpdateEndpointWeightsAndCapacitiesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateEndpointWeightsAndCapacities response element from \a xml.
 */
void UpdateEndpointWeightsAndCapacitiesResponsePrivate::parseUpdateEndpointWeightsAndCapacitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointWeightsAndCapacitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
