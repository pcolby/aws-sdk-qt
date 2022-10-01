// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcandidatesforautomljobresponse.h"
#include "listcandidatesforautomljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCandidatesForAutoMLJobResponse
 * \brief The ListCandidatesForAutoMLJobResponse class provides an interace for SageMaker ListCandidatesForAutoMLJob responses.
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
 * \sa SageMakerClient::listCandidatesForAutoMLJob
 */

/*!
 * Constructs a ListCandidatesForAutoMLJobResponse object for \a reply to \a request, with parent \a parent.
 */
ListCandidatesForAutoMLJobResponse::ListCandidatesForAutoMLJobResponse(
        const ListCandidatesForAutoMLJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListCandidatesForAutoMLJobResponsePrivate(this), parent)
{
    setRequest(new ListCandidatesForAutoMLJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCandidatesForAutoMLJobRequest * ListCandidatesForAutoMLJobResponse::request() const
{
    Q_D(const ListCandidatesForAutoMLJobResponse);
    return static_cast<const ListCandidatesForAutoMLJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListCandidatesForAutoMLJob \a response.
 */
void ListCandidatesForAutoMLJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCandidatesForAutoMLJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListCandidatesForAutoMLJobResponsePrivate
 * \brief The ListCandidatesForAutoMLJobResponsePrivate class provides private implementation for ListCandidatesForAutoMLJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCandidatesForAutoMLJobResponsePrivate object with public implementation \a q.
 */
ListCandidatesForAutoMLJobResponsePrivate::ListCandidatesForAutoMLJobResponsePrivate(
    ListCandidatesForAutoMLJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListCandidatesForAutoMLJob response element from \a xml.
 */
void ListCandidatesForAutoMLJobResponsePrivate::parseListCandidatesForAutoMLJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCandidatesForAutoMLJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
