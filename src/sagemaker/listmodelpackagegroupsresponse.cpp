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

#include "listmodelpackagegroupsresponse.h"
#include "listmodelpackagegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelPackageGroupsResponse
 * \brief The ListModelPackageGroupsResponse class provides an interace for SageMaker ListModelPackageGroups responses.
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
 * \sa SageMakerClient::listModelPackageGroups
 */

/*!
 * Constructs a ListModelPackageGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelPackageGroupsResponse::ListModelPackageGroupsResponse(
        const ListModelPackageGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelPackageGroupsResponsePrivate(this), parent)
{
    setRequest(new ListModelPackageGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelPackageGroupsRequest * ListModelPackageGroupsResponse::request() const
{
    Q_D(const ListModelPackageGroupsResponse);
    return static_cast<const ListModelPackageGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelPackageGroups \a response.
 */
void ListModelPackageGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelPackageGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelPackageGroupsResponsePrivate
 * \brief The ListModelPackageGroupsResponsePrivate class provides private implementation for ListModelPackageGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelPackageGroupsResponsePrivate object with public implementation \a q.
 */
ListModelPackageGroupsResponsePrivate::ListModelPackageGroupsResponsePrivate(
    ListModelPackageGroupsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelPackageGroups response element from \a xml.
 */
void ListModelPackageGroupsResponsePrivate::parseListModelPackageGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelPackageGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
