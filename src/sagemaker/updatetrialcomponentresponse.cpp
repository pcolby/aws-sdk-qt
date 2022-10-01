// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrialcomponentresponse.h"
#include "updatetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateTrialComponentResponse
 * \brief The UpdateTrialComponentResponse class provides an interace for SageMaker UpdateTrialComponent responses.
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
 * \sa SageMakerClient::updateTrialComponent
 */

/*!
 * Constructs a UpdateTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrialComponentResponse::UpdateTrialComponentResponse(
        const UpdateTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateTrialComponentResponsePrivate(this), parent)
{
    setRequest(new UpdateTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrialComponentRequest * UpdateTrialComponentResponse::request() const
{
    Q_D(const UpdateTrialComponentResponse);
    return static_cast<const UpdateTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateTrialComponent \a response.
 */
void UpdateTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateTrialComponentResponsePrivate
 * \brief The UpdateTrialComponentResponsePrivate class provides private implementation for UpdateTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateTrialComponentResponsePrivate object with public implementation \a q.
 */
UpdateTrialComponentResponsePrivate::UpdateTrialComponentResponsePrivate(
    UpdateTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateTrialComponent response element from \a xml.
 */
void UpdateTrialComponentResponsePrivate::parseUpdateTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
