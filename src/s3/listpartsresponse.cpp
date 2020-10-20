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
