// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ListNotebookInstanceLifecycleConfigsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
