// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbucketsresponse.h"
#include "listbucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketsResponse
 * \brief The ListBucketsResponse class provides an interace for S3 ListBuckets responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBuckets
 */

/*!
 * Constructs a ListBucketsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBucketsResponse::ListBucketsResponse(
        const ListBucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketsResponsePrivate(this), parent)
{
    setRequest(new ListBucketsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBucketsRequest * ListBucketsResponse::request() const
{
    Q_D(const ListBucketsResponse);
    return static_cast<const ListBucketsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListBuckets \a response.
 */
void ListBucketsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListBucketsResponsePrivate
 * \brief The ListBucketsResponsePrivate class provides private implementation for ListBucketsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketsResponsePrivate object with public implementation \a q.
 */
ListBucketsResponsePrivate::ListBucketsResponsePrivate(
    ListBucketsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListBuckets response element from \a xml.
 */
void ListBucketsResponsePrivate::parseListBucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
