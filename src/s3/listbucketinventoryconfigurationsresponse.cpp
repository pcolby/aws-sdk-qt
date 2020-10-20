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

#include "listbucketinventoryconfigurationsresponse.h"
#include "listbucketinventoryconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketInventoryConfigurationsResponse
 * \brief The ListBucketInventoryConfigurationsResponse class provides an interace for S3 ListBucketInventoryConfigurations responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketInventoryConfigurations
 */

/*!
 * Constructs a ListBucketInventoryConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBucketInventoryConfigurationsResponse::ListBucketInventoryConfigurationsResponse(
        const ListBucketInventoryConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketInventoryConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListBucketInventoryConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBucketInventoryConfigurationsRequest * ListBucketInventoryConfigurationsResponse::request() const
{
    Q_D(const ListBucketInventoryConfigurationsResponse);
    return static_cast<const ListBucketInventoryConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListBucketInventoryConfigurations \a response.
 */
void ListBucketInventoryConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBucketInventoryConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListBucketInventoryConfigurationsResponsePrivate
 * \brief The ListBucketInventoryConfigurationsResponsePrivate class provides private implementation for ListBucketInventoryConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketInventoryConfigurationsResponsePrivate object with public implementation \a q.
 */
ListBucketInventoryConfigurationsResponsePrivate::ListBucketInventoryConfigurationsResponsePrivate(
    ListBucketInventoryConfigurationsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListBucketInventoryConfigurations response element from \a xml.
 */
void ListBucketInventoryConfigurationsResponsePrivate::parseListBucketInventoryConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketInventoryConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
