// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrialresponse.h"
#include "deletetrialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteTrialResponse
 * \brief The DeleteTrialResponse class provides an interace for SageMaker DeleteTrial responses.
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
 * \sa SageMakerClient::deleteTrial
 */

/*!
 * Constructs a DeleteTrialResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrialResponse::DeleteTrialResponse(
        const DeleteTrialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteTrialResponsePrivate(this), parent)
{
    setRequest(new DeleteTrialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrialRequest * DeleteTrialResponse::request() const
{
    Q_D(const DeleteTrialResponse);
    return static_cast<const DeleteTrialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteTrial \a response.
 */
void DeleteTrialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteTrialResponsePrivate
 * \brief The DeleteTrialResponsePrivate class provides private implementation for DeleteTrialResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteTrialResponsePrivate object with public implementation \a q.
 */
DeleteTrialResponsePrivate::DeleteTrialResponsePrivate(
    DeleteTrialResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteTrial response element from \a xml.
 */
void DeleteTrialResponsePrivate::parseDeleteTrialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
