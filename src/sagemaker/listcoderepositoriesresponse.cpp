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

#include "listcoderepositoriesresponse.h"
#include "listcoderepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesResponse
 * \brief The ListCodeRepositoriesResponse class provides an interace for SageMaker ListCodeRepositories responses.
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
 * \sa SageMakerClient::listCodeRepositories
 */

/*!
 * Constructs a ListCodeRepositoriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCodeRepositoriesResponse::ListCodeRepositoriesResponse(
        const ListCodeRepositoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListCodeRepositoriesResponsePrivate(this), parent)
{
    setRequest(new ListCodeRepositoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCodeRepositoriesRequest * ListCodeRepositoriesResponse::request() const
{
    Q_D(const ListCodeRepositoriesResponse);
    return static_cast<const ListCodeRepositoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListCodeRepositories \a response.
 */
void ListCodeRepositoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCodeRepositoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesResponsePrivate
 * \brief The ListCodeRepositoriesResponsePrivate class provides private implementation for ListCodeRepositoriesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCodeRepositoriesResponsePrivate object with public implementation \a q.
 */
ListCodeRepositoriesResponsePrivate::ListCodeRepositoriesResponsePrivate(
    ListCodeRepositoriesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListCodeRepositories response element from \a xml.
 */
void ListCodeRepositoriesResponsePrivate::parseListCodeRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCodeRepositoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
