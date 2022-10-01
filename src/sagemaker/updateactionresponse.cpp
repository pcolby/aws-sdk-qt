// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateactionresponse.h"
#include "updateactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateActionResponse
 * \brief The UpdateActionResponse class provides an interace for SageMaker UpdateAction responses.
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
 * \sa SageMakerClient::updateAction
 */

/*!
 * Constructs a UpdateActionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateActionResponse::UpdateActionResponse(
        const UpdateActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateActionResponsePrivate(this), parent)
{
    setRequest(new UpdateActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateActionRequest * UpdateActionResponse::request() const
{
    Q_D(const UpdateActionResponse);
    return static_cast<const UpdateActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateAction \a response.
 */
void UpdateActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateActionResponsePrivate
 * \brief The UpdateActionResponsePrivate class provides private implementation for UpdateActionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateActionResponsePrivate object with public implementation \a q.
 */
UpdateActionResponsePrivate::UpdateActionResponsePrivate(
    UpdateActionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateAction response element from \a xml.
 */
void UpdateActionResponsePrivate::parseUpdateActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
