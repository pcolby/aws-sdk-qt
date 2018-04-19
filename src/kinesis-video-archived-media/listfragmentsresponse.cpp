/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listfragmentsresponse.h"
#include "listfragmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::ListFragmentsResponse
 * \brief The ListFragmentsResponse class provides an interace for KinesisVideoArchivedMedia ListFragments responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::listFragments
 */

/*!
 * Constructs a ListFragmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFragmentsResponse::ListFragmentsResponse(
        const ListFragmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new ListFragmentsResponsePrivate(this), parent)
{
    setRequest(new ListFragmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFragmentsRequest * ListFragmentsResponse::request() const
{
    Q_D(const ListFragmentsResponse);
    return static_cast<const ListFragmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia ListFragments \a response.
 */
void ListFragmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFragmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::ListFragmentsResponsePrivate
 * \brief The ListFragmentsResponsePrivate class provides private implementation for ListFragmentsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a ListFragmentsResponsePrivate object with public implementation \a q.
 */
ListFragmentsResponsePrivate::ListFragmentsResponsePrivate(
    ListFragmentsResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia ListFragments response element from \a xml.
 */
void ListFragmentsResponsePrivate::parseListFragmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFragmentsResponse"));
    /// @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
