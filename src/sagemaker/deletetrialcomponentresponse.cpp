// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrialcomponentresponse.h"
#include "deletetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteTrialComponentResponse
 * \brief The DeleteTrialComponentResponse class provides an interace for SageMaker DeleteTrialComponent responses.
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
 * \sa SageMakerClient::deleteTrialComponent
 */

/*!
 * Constructs a DeleteTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrialComponentResponse::DeleteTrialComponentResponse(
        const DeleteTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteTrialComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrialComponentRequest * DeleteTrialComponentResponse::request() const
{
    Q_D(const DeleteTrialComponentResponse);
    return static_cast<const DeleteTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteTrialComponent \a response.
 */
void DeleteTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteTrialComponentResponsePrivate
 * \brief The DeleteTrialComponentResponsePrivate class provides private implementation for DeleteTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteTrialComponentResponsePrivate object with public implementation \a q.
 */
DeleteTrialComponentResponsePrivate::DeleteTrialComponentResponsePrivate(
    DeleteTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteTrialComponent response element from \a xml.
 */
void DeleteTrialComponentResponsePrivate::parseDeleteTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
