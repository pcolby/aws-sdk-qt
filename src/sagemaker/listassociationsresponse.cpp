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

#include "listassociationsresponse.h"
#include "listassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAssociationsResponse
 * \brief The ListAssociationsResponse class provides an interace for SageMaker ListAssociations responses.
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
 * \sa SageMakerClient::listAssociations
 */

/*!
 * Constructs a ListAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociationsResponse::ListAssociationsResponse(
        const ListAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociationsRequest * ListAssociationsResponse::request() const
{
    return static_cast<const ListAssociationsRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker ListAssociations \a response.
 */
void ListAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAssociationsResponsePrivate
 * \brief The ListAssociationsResponsePrivate class provides private implementation for ListAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAssociationsResponsePrivate object with public implementation \a q.
 */
ListAssociationsResponsePrivate::ListAssociationsResponsePrivate(
    ListAssociationsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListAssociations response element from \a xml.
 */
void ListAssociationsResponsePrivate::parseListAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
