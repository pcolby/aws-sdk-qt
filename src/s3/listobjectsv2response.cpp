// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectsv2response.h"
#include "listobjectsv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsV2Response
 * \brief The ListObjectsV2Response class provides an interace for S3 ListObjectsV2 responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjectsV2
 */

/*!
 * Constructs a ListObjectsV2Response object for \a reply to \a request, with parent \a parent.
 */
ListObjectsV2Response::ListObjectsV2Response(
        const ListObjectsV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectsV2ResponsePrivate(this), parent)
{
    setRequest(new ListObjectsV2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectsV2Request * ListObjectsV2Response::request() const
{
    Q_D(const ListObjectsV2Response);
    return static_cast<const ListObjectsV2Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListObjectsV2 \a response.
 */
void ListObjectsV2Response::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectsV2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListObjectsV2ResponsePrivate
 * \brief The ListObjectsV2ResponsePrivate class provides private implementation for ListObjectsV2Response.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectsV2ResponsePrivate object with public implementation \a q.
 */
ListObjectsV2ResponsePrivate::ListObjectsV2ResponsePrivate(
    ListObjectsV2Response * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListObjectsV2 response element from \a xml.
 */
void ListObjectsV2ResponsePrivate::parseListObjectsV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsV2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
