// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listedgedeploymentplansresponse.h"
#include "listedgedeploymentplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEdgeDeploymentPlansResponse
 * \brief The ListEdgeDeploymentPlansResponse class provides an interace for SageMaker ListEdgeDeploymentPlans responses.
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
 * \sa SageMakerClient::listEdgeDeploymentPlans
 */

/*!
 * Constructs a ListEdgeDeploymentPlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListEdgeDeploymentPlansResponse::ListEdgeDeploymentPlansResponse(
        const ListEdgeDeploymentPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEdgeDeploymentPlansResponsePrivate(this), parent)
{
    setRequest(new ListEdgeDeploymentPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEdgeDeploymentPlansRequest * ListEdgeDeploymentPlansResponse::request() const
{
    Q_D(const ListEdgeDeploymentPlansResponse);
    return static_cast<const ListEdgeDeploymentPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListEdgeDeploymentPlans \a response.
 */
void ListEdgeDeploymentPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEdgeDeploymentPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListEdgeDeploymentPlansResponsePrivate
 * \brief The ListEdgeDeploymentPlansResponsePrivate class provides private implementation for ListEdgeDeploymentPlansResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEdgeDeploymentPlansResponsePrivate object with public implementation \a q.
 */
ListEdgeDeploymentPlansResponsePrivate::ListEdgeDeploymentPlansResponsePrivate(
    ListEdgeDeploymentPlansResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListEdgeDeploymentPlans response element from \a xml.
 */
void ListEdgeDeploymentPlansResponsePrivate::parseListEdgeDeploymentPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEdgeDeploymentPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
