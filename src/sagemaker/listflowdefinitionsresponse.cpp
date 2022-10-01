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

#include "listflowdefinitionsresponse.h"
#include "listflowdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListFlowDefinitionsResponse
 * \brief The ListFlowDefinitionsResponse class provides an interace for SageMaker ListFlowDefinitions responses.
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
 * \sa SageMakerClient::listFlowDefinitions
 */

/*!
 * Constructs a ListFlowDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFlowDefinitionsResponse::ListFlowDefinitionsResponse(
        const ListFlowDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListFlowDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListFlowDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFlowDefinitionsRequest * ListFlowDefinitionsResponse::request() const
{
    Q_D(const ListFlowDefinitionsResponse);
    return static_cast<const ListFlowDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListFlowDefinitions \a response.
 */
void ListFlowDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFlowDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListFlowDefinitionsResponsePrivate
 * \brief The ListFlowDefinitionsResponsePrivate class provides private implementation for ListFlowDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListFlowDefinitionsResponsePrivate object with public implementation \a q.
 */
ListFlowDefinitionsResponsePrivate::ListFlowDefinitionsResponsePrivate(
    ListFlowDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListFlowDefinitions response element from \a xml.
 */
void ListFlowDefinitionsResponsePrivate::parseListFlowDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFlowDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
