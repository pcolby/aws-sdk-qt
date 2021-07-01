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

#include "listnotebookinstancesresponse.h"
#include "listnotebookinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesResponse
 * \brief The ListNotebookInstancesResponse class provides an interace for SageMaker ListNotebookInstances responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listNotebookInstances
 */

/*!
 * Constructs a ListNotebookInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNotebookInstancesResponse::ListNotebookInstancesResponse(
        const ListNotebookInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListNotebookInstancesResponsePrivate(this), parent)
{
    setRequest(new ListNotebookInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNotebookInstancesRequest * ListNotebookInstancesResponse::request() const
{
    Q_D(const ListNotebookInstancesResponse);
    return static_cast<const ListNotebookInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListNotebookInstances \a response.
 */
void ListNotebookInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNotebookInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesResponsePrivate
 * \brief The ListNotebookInstancesResponsePrivate class provides private implementation for ListNotebookInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListNotebookInstancesResponsePrivate object with public implementation \a q.
 */
ListNotebookInstancesResponsePrivate::ListNotebookInstancesResponsePrivate(
    ListNotebookInstancesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListNotebookInstances response element from \a xml.
 */
void ListNotebookInstancesResponsePrivate::parseListNotebookInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotebookInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
