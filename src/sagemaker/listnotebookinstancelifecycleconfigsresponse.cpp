/*
    Copyright 2013-2018 Paul Colby

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

#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "listnotebookinstancelifecycleconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsResponse
 * \brief The ListNotebookInstanceLifecycleConfigsResponse class provides an interace for SageMaker ListNotebookInstanceLifecycleConfigs responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listNotebookInstanceLifecycleConfigs
 */

/*!
 * Constructs a ListNotebookInstanceLifecycleConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListNotebookInstanceLifecycleConfigsResponse::ListNotebookInstanceLifecycleConfigsResponse(
        const ListNotebookInstanceLifecycleConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListNotebookInstanceLifecycleConfigsResponsePrivate(this), parent)
{
    setRequest(new ListNotebookInstanceLifecycleConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNotebookInstanceLifecycleConfigsRequest * ListNotebookInstanceLifecycleConfigsResponse::request() const
{
    Q_D(const ListNotebookInstanceLifecycleConfigsResponse);
    return static_cast<const ListNotebookInstanceLifecycleConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListNotebookInstanceLifecycleConfigs \a response.
 */
void ListNotebookInstanceLifecycleConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListNotebookInstanceLifecycleConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsResponsePrivate
 * \brief The ListNotebookInstanceLifecycleConfigsResponsePrivate class provides private implementation for ListNotebookInstanceLifecycleConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListNotebookInstanceLifecycleConfigsResponsePrivate object with public implementation \a q.
 */
ListNotebookInstanceLifecycleConfigsResponsePrivate::ListNotebookInstanceLifecycleConfigsResponsePrivate(
    ListNotebookInstanceLifecycleConfigsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListNotebookInstanceLifecycleConfigs response element from \a xml.
 */
void ListNotebookInstanceLifecycleConfigsResponsePrivate::parseListNotebookInstanceLifecycleConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotebookInstanceLifecycleConfigsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
