// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopautomljobresponse.h"
#include "stopautomljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopAutoMLJobResponse
 * \brief The StopAutoMLJobResponse class provides an interace for SageMaker StopAutoMLJob responses.
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
 * \sa SageMakerClient::stopAutoMLJob
 */

/*!
 * Constructs a StopAutoMLJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopAutoMLJobResponse::StopAutoMLJobResponse(
        const StopAutoMLJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopAutoMLJobResponsePrivate(this), parent)
{
    setRequest(new StopAutoMLJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopAutoMLJobRequest * StopAutoMLJobResponse::request() const
{
    Q_D(const StopAutoMLJobResponse);
    return static_cast<const StopAutoMLJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopAutoMLJob \a response.
 */
void StopAutoMLJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopAutoMLJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopAutoMLJobResponsePrivate
 * \brief The StopAutoMLJobResponsePrivate class provides private implementation for StopAutoMLJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopAutoMLJobResponsePrivate object with public implementation \a q.
 */
StopAutoMLJobResponsePrivate::StopAutoMLJobResponsePrivate(
    StopAutoMLJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopAutoMLJob response element from \a xml.
 */
void StopAutoMLJobResponsePrivate::parseStopAutoMLJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAutoMLJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
