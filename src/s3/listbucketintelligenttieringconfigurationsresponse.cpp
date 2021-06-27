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

#include "listbucketintelligenttieringconfigurationsresponse.h"
#include "listbucketintelligenttieringconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketIntelligentTieringConfigurationsResponse
 * \brief The ListBucketIntelligentTieringConfigurationsResponse class provides an interace for S3 ListBucketIntelligentTieringConfigurations responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketIntelligentTieringConfigurations
 */

/*!
 * Constructs a ListBucketIntelligentTieringConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBucketIntelligentTieringConfigurationsResponse::ListBucketIntelligentTieringConfigurationsResponse(
        const ListBucketIntelligentTieringConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketIntelligentTieringConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListBucketIntelligentTieringConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBucketIntelligentTieringConfigurationsRequest * ListBucketIntelligentTieringConfigurationsResponse::request() const
{
    return static_cast<const ListBucketIntelligentTieringConfigurationsRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 ListBucketIntelligentTieringConfigurations \a response.
 */
void ListBucketIntelligentTieringConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBucketIntelligentTieringConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListBucketIntelligentTieringConfigurationsResponsePrivate
 * \brief The ListBucketIntelligentTieringConfigurationsResponsePrivate class provides private implementation for ListBucketIntelligentTieringConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketIntelligentTieringConfigurationsResponsePrivate object with public implementation \a q.
 */
ListBucketIntelligentTieringConfigurationsResponsePrivate::ListBucketIntelligentTieringConfigurationsResponsePrivate(
    ListBucketIntelligentTieringConfigurationsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListBucketIntelligentTieringConfigurations response element from \a xml.
 */
void ListBucketIntelligentTieringConfigurationsResponsePrivate::parseListBucketIntelligentTieringConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketIntelligentTieringConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
