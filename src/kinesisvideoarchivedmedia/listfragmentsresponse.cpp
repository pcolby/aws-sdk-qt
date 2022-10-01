// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ListFragmentsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
