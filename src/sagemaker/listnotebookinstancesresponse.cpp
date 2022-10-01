// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
