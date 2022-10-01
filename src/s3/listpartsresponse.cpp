// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpartsresponse.h"
#include "listpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListPartsResponse
 * \brief The ListPartsResponse class provides an interace for S3 ListParts responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listParts
 */

/*!
 * Constructs a ListPartsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPartsResponse::ListPartsResponse(
        const ListPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListPartsResponsePrivate(this), parent)
{
    setRequest(new ListPartsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPartsRequest * ListPartsResponse::request() const
{
    Q_D(const ListPartsResponse);
    return static_cast<const ListPartsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListParts \a response.
 */
void ListPartsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListPartsResponsePrivate
 * \brief The ListPartsResponsePrivate class provides private implementation for ListPartsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListPartsResponsePrivate object with public implementation \a q.
 */
ListPartsResponsePrivate::ListPartsResponsePrivate(
    ListPartsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListParts response element from \a xml.
 */
void ListPartsResponsePrivate::parseListPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPartsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
