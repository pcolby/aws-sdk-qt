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
