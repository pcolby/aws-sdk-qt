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

#include "listfeaturegroupsresponse.h"
#include "listfeaturegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListFeatureGroupsResponse
 * \brief The ListFeatureGroupsResponse class provides an interace for SageMaker ListFeatureGroups responses.
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
 * \sa SageMakerClient::listFeatureGroups
 */

/*!
 * Constructs a ListFeatureGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFeatureGroupsResponse::ListFeatureGroupsResponse(
        const ListFeatureGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListFeatureGroupsResponsePrivate(this), parent)
{
    setRequest(new ListFeatureGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFeatureGroupsRequest * ListFeatureGroupsResponse::request() const
{
    Q_D(const ListFeatureGroupsResponse);
    return static_cast<const ListFeatureGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListFeatureGroups \a response.
 */
void ListFeatureGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFeatureGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListFeatureGroupsResponsePrivate
 * \brief The ListFeatureGroupsResponsePrivate class provides private implementation for ListFeatureGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListFeatureGroupsResponsePrivate object with public implementation \a q.
 */
ListFeatureGroupsResponsePrivate::ListFeatureGroupsResponsePrivate(
    ListFeatureGroupsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListFeatureGroups response element from \a xml.
 */
void ListFeatureGroupsResponsePrivate::parseListFeatureGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFeatureGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
