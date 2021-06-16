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

#include "listactionsresponse.h"
#include "listactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListActionsResponse
 * \brief The ListActionsResponse class provides an interace for SageMaker ListActions responses.
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
 * \sa SageMakerClient::listActions
 */

/*!
 * Constructs a ListActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListActionsResponse::ListActionsResponse(
        const ListActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListActionsResponsePrivate(this), parent)
{
    setRequest(new ListActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActionsRequest * ListActionsResponse::request() const
{
    Q_D(const ListActionsResponse);
    return static_cast<const ListActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListActions \a response.
 */
void ListActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListActionsResponsePrivate
 * \brief The ListActionsResponsePrivate class provides private implementation for ListActionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListActionsResponsePrivate object with public implementation \a q.
 */
ListActionsResponsePrivate::ListActionsResponsePrivate(
    ListActionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListActions response element from \a xml.
 */
void ListActionsResponsePrivate::parseListActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
