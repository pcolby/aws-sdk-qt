// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListBucketIntelligentTieringConfigurationsResponse);
    return static_cast<const ListBucketIntelligentTieringConfigurationsRequest *>(d->request);
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
