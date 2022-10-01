// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelinesresponse.h"
#include "listpipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelinesResponse
 * \brief The ListPipelinesResponse class provides an interace for SageMaker ListPipelines responses.
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
 * \sa SageMakerClient::listPipelines
 */

/*!
 * Constructs a ListPipelinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPipelinesResponse::ListPipelinesResponse(
        const ListPipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListPipelinesResponsePrivate(this), parent)
{
    setRequest(new ListPipelinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPipelinesRequest * ListPipelinesResponse::request() const
{
    Q_D(const ListPipelinesResponse);
    return static_cast<const ListPipelinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListPipelines \a response.
 */
void ListPipelinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListPipelinesResponsePrivate
 * \brief The ListPipelinesResponsePrivate class provides private implementation for ListPipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelinesResponsePrivate object with public implementation \a q.
 */
ListPipelinesResponsePrivate::ListPipelinesResponsePrivate(
    ListPipelinesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListPipelines response element from \a xml.
 */
void ListPipelinesResponsePrivate::parseListPipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
