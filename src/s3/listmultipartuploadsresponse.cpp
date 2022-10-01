// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultipartuploadsresponse.h"
#include "listmultipartuploadsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListMultipartUploadsResponse
 * \brief The ListMultipartUploadsResponse class provides an interace for S3 ListMultipartUploads responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listMultipartUploads
 */

/*!
 * Constructs a ListMultipartUploadsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMultipartUploadsResponse::ListMultipartUploadsResponse(
        const ListMultipartUploadsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListMultipartUploadsResponsePrivate(this), parent)
{
    setRequest(new ListMultipartUploadsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMultipartUploadsRequest * ListMultipartUploadsResponse::request() const
{
    Q_D(const ListMultipartUploadsResponse);
    return static_cast<const ListMultipartUploadsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListMultipartUploads \a response.
 */
void ListMultipartUploadsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMultipartUploadsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListMultipartUploadsResponsePrivate
 * \brief The ListMultipartUploadsResponsePrivate class provides private implementation for ListMultipartUploadsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListMultipartUploadsResponsePrivate object with public implementation \a q.
 */
ListMultipartUploadsResponsePrivate::ListMultipartUploadsResponsePrivate(
    ListMultipartUploadsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListMultipartUploads response element from \a xml.
 */
void ListMultipartUploadsResponsePrivate::parseListMultipartUploadsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMultipartUploadsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
