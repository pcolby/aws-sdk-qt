// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectsresponse.h"
#include "listobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsResponse
 * \brief The ListObjectsResponse class provides an interace for S3 ListObjects responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjects
 */

/*!
 * Constructs a ListObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectsResponse::ListObjectsResponse(
        const ListObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectsResponsePrivate(this), parent)
{
    setRequest(new ListObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectsRequest * ListObjectsResponse::request() const
{
    Q_D(const ListObjectsResponse);
    return static_cast<const ListObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListObjects \a response.
 */
void ListObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListObjectsResponsePrivate
 * \brief The ListObjectsResponsePrivate class provides private implementation for ListObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectsResponsePrivate object with public implementation \a q.
 */
ListObjectsResponsePrivate::ListObjectsResponsePrivate(
    ListObjectsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListObjects response element from \a xml.
 */
void ListObjectsResponsePrivate::parseListObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
