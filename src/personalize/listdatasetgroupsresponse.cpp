/*
    Copyright 2013-2020 Paul Colby

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

#include "listdatasetgroupsresponse.h"
#include "listdatasetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetGroupsResponse
 * \brief The ListDatasetGroupsResponse class provides an interace for Personalize ListDatasetGroups responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetGroups
 */

/*!
 * Constructs a ListDatasetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetGroupsResponse::ListDatasetGroupsResponse(
        const ListDatasetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListDatasetGroupsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetGroupsRequest * ListDatasetGroupsResponse::request() const
{
    Q_D(const ListDatasetGroupsResponse);
    return static_cast<const ListDatasetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListDatasetGroups \a response.
 */
void ListDatasetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListDatasetGroupsResponsePrivate
 * \brief The ListDatasetGroupsResponsePrivate class provides private implementation for ListDatasetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetGroupsResponsePrivate object with public implementation \a q.
 */
ListDatasetGroupsResponsePrivate::ListDatasetGroupsResponsePrivate(
    ListDatasetGroupsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListDatasetGroups response element from \a xml.
 */
void ListDatasetGroupsResponsePrivate::parseListDatasetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
