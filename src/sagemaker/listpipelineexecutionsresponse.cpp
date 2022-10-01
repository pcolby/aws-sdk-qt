// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelineexecutionsresponse.h"
#include "listpipelineexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionsResponse
 * \brief The ListPipelineExecutionsResponse class provides an interace for SageMaker ListPipelineExecutions responses.
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
 * \sa SageMakerClient::listPipelineExecutions
 */

/*!
 * Constructs a ListPipelineExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPipelineExecutionsResponse::ListPipelineExecutionsResponse(
        const ListPipelineExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListPipelineExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListPipelineExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPipelineExecutionsRequest * ListPipelineExecutionsResponse::request() const
{
    Q_D(const ListPipelineExecutionsResponse);
    return static_cast<const ListPipelineExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListPipelineExecutions \a response.
 */
void ListPipelineExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPipelineExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionsResponsePrivate
 * \brief The ListPipelineExecutionsResponsePrivate class provides private implementation for ListPipelineExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelineExecutionsResponsePrivate object with public implementation \a q.
 */
ListPipelineExecutionsResponsePrivate::ListPipelineExecutionsResponsePrivate(
    ListPipelineExecutionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListPipelineExecutions response element from \a xml.
 */
void ListPipelineExecutionsResponsePrivate::parseListPipelineExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelineExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
