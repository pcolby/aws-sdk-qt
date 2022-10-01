// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetrialcomponentresponse.h"
#include "associatetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::AssociateTrialComponentResponse
 * \brief The AssociateTrialComponentResponse class provides an interace for SageMaker AssociateTrialComponent responses.
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
 * \sa SageMakerClient::associateTrialComponent
 */

/*!
 * Constructs a AssociateTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateTrialComponentResponse::AssociateTrialComponentResponse(
        const AssociateTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new AssociateTrialComponentResponsePrivate(this), parent)
{
    setRequest(new AssociateTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateTrialComponentRequest * AssociateTrialComponentResponse::request() const
{
    Q_D(const AssociateTrialComponentResponse);
    return static_cast<const AssociateTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker AssociateTrialComponent \a response.
 */
void AssociateTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::AssociateTrialComponentResponsePrivate
 * \brief The AssociateTrialComponentResponsePrivate class provides private implementation for AssociateTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a AssociateTrialComponentResponsePrivate object with public implementation \a q.
 */
AssociateTrialComponentResponsePrivate::AssociateTrialComponentResponsePrivate(
    AssociateTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker AssociateTrialComponent response element from \a xml.
 */
void AssociateTrialComponentResponsePrivate::parseAssociateTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
