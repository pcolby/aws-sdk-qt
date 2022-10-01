// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrialresponse.h"
#include "updatetrialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateTrialResponse
 * \brief The UpdateTrialResponse class provides an interace for SageMaker UpdateTrial responses.
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
 * \sa SageMakerClient::updateTrial
 */

/*!
 * Constructs a UpdateTrialResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrialResponse::UpdateTrialResponse(
        const UpdateTrialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateTrialResponsePrivate(this), parent)
{
    setRequest(new UpdateTrialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrialRequest * UpdateTrialResponse::request() const
{
    Q_D(const UpdateTrialResponse);
    return static_cast<const UpdateTrialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateTrial \a response.
 */
void UpdateTrialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTrialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateTrialResponsePrivate
 * \brief The UpdateTrialResponsePrivate class provides private implementation for UpdateTrialResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateTrialResponsePrivate object with public implementation \a q.
 */
UpdateTrialResponsePrivate::UpdateTrialResponsePrivate(
    UpdateTrialResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateTrial response element from \a xml.
 */
void UpdateTrialResponsePrivate::parseUpdateTrialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
