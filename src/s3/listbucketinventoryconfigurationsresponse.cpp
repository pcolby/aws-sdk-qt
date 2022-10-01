// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
