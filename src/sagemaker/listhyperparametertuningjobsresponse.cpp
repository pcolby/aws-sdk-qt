// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhyperparametertuningjobsresponse.h"
#include "listhyperparametertuningjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsResponse
 * \brief The ListHyperParameterTuningJobsResponse class provides an interace for SageMaker ListHyperParameterTuningJobs responses.
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
 * \sa SageMakerClient::listHyperParameterTuningJobs
 */

/*!
 * Constructs a ListHyperParameterTuningJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHyperParameterTuningJobsResponse::ListHyperParameterTuningJobsResponse(
        const ListHyperParameterTuningJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListHyperParameterTuningJobsResponsePrivate(this), parent)
{
    setRequest(new ListHyperParameterTuningJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHyperParameterTuningJobsRequest * ListHyperParameterTuningJobsResponse::request() const
{
    Q_D(const ListHyperParameterTuningJobsResponse);
    return static_cast<const ListHyperParameterTuningJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListHyperParameterTuningJobs \a response.
 */
void ListHyperParameterTuningJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHyperParameterTuningJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsResponsePrivate
 * \brief The ListHyperParameterTuningJobsResponsePrivate class provides private implementation for ListHyperParameterTuningJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListHyperParameterTuningJobsResponsePrivate object with public implementation \a q.
 */
ListHyperParameterTuningJobsResponsePrivate::ListHyperParameterTuningJobsResponsePrivate(
    ListHyperParameterTuningJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListHyperParameterTuningJobs response element from \a xml.
 */
void ListHyperParameterTuningJobsResponsePrivate::parseListHyperParameterTuningJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHyperParameterTuningJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
