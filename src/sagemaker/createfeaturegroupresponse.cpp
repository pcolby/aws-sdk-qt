// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfeaturegroupresponse.h"
#include "createfeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateFeatureGroupResponse
 * \brief The CreateFeatureGroupResponse class provides an interace for SageMaker CreateFeatureGroup responses.
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
 * \sa SageMakerClient::createFeatureGroup
 */

/*!
 * Constructs a CreateFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFeatureGroupResponse::CreateFeatureGroupResponse(
        const CreateFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new CreateFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFeatureGroupRequest * CreateFeatureGroupResponse::request() const
{
    Q_D(const CreateFeatureGroupResponse);
    return static_cast<const CreateFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateFeatureGroup \a response.
 */
void CreateFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateFeatureGroupResponsePrivate
 * \brief The CreateFeatureGroupResponsePrivate class provides private implementation for CreateFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateFeatureGroupResponsePrivate object with public implementation \a q.
 */
CreateFeatureGroupResponsePrivate::CreateFeatureGroupResponsePrivate(
    CreateFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateFeatureGroup response element from \a xml.
 */
void CreateFeatureGroupResponsePrivate::parseCreateFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
