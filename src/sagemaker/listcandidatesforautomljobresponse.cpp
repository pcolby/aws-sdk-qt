/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
