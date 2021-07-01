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

#include "listmodelqualityjobdefinitionsresponse.h"
#include "listmodelqualityjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelQualityJobDefinitionsResponse
 * \brief The ListModelQualityJobDefinitionsResponse class provides an interace for SageMaker ListModelQualityJobDefinitions responses.
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
 * \sa SageMakerClient::listModelQualityJobDefinitions
 */

/*!
 * Constructs a ListModelQualityJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelQualityJobDefinitionsResponse::ListModelQualityJobDefinitionsResponse(
        const ListModelQualityJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelQualityJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListModelQualityJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelQualityJobDefinitionsRequest * ListModelQualityJobDefinitionsResponse::request() const
{
    Q_D(const ListModelQualityJobDefinitionsResponse);
    return static_cast<const ListModelQualityJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelQualityJobDefinitions \a response.
 */
void ListModelQualityJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelQualityJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelQualityJobDefinitionsResponsePrivate
 * \brief The ListModelQualityJobDefinitionsResponsePrivate class provides private implementation for ListModelQualityJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelQualityJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListModelQualityJobDefinitionsResponsePrivate::ListModelQualityJobDefinitionsResponsePrivate(
    ListModelQualityJobDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelQualityJobDefinitions response element from \a xml.
 */
void ListModelQualityJobDefinitionsResponsePrivate::parseListModelQualityJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelQualityJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
