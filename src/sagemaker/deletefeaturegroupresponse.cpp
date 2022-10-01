// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefeaturegroupresponse.h"
#include "deletefeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteFeatureGroupResponse
 * \brief The DeleteFeatureGroupResponse class provides an interace for SageMaker DeleteFeatureGroup responses.
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
 * \sa SageMakerClient::deleteFeatureGroup
 */

/*!
 * Constructs a DeleteFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFeatureGroupResponse::DeleteFeatureGroupResponse(
        const DeleteFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFeatureGroupRequest * DeleteFeatureGroupResponse::request() const
{
    Q_D(const DeleteFeatureGroupResponse);
    return static_cast<const DeleteFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteFeatureGroup \a response.
 */
void DeleteFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteFeatureGroupResponsePrivate
 * \brief The DeleteFeatureGroupResponsePrivate class provides private implementation for DeleteFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteFeatureGroupResponsePrivate object with public implementation \a q.
 */
DeleteFeatureGroupResponsePrivate::DeleteFeatureGroupResponsePrivate(
    DeleteFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteFeatureGroup response element from \a xml.
 */
void DeleteFeatureGroupResponsePrivate::parseDeleteFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
