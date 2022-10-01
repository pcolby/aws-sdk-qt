// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventtrackersresponse.h"
#include "listeventtrackersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListEventTrackersResponse
 * \brief The ListEventTrackersResponse class provides an interace for Personalize ListEventTrackers responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listEventTrackers
 */

/*!
 * Constructs a ListEventTrackersResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventTrackersResponse::ListEventTrackersResponse(
        const ListEventTrackersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListEventTrackersResponsePrivate(this), parent)
{
    setRequest(new ListEventTrackersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventTrackersRequest * ListEventTrackersResponse::request() const
{
    Q_D(const ListEventTrackersResponse);
    return static_cast<const ListEventTrackersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListEventTrackers \a response.
 */
void ListEventTrackersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventTrackersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListEventTrackersResponsePrivate
 * \brief The ListEventTrackersResponsePrivate class provides private implementation for ListEventTrackersResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListEventTrackersResponsePrivate object with public implementation \a q.
 */
ListEventTrackersResponsePrivate::ListEventTrackersResponsePrivate(
    ListEventTrackersResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListEventTrackers response element from \a xml.
 */
void ListEventTrackersResponsePrivate::parseListEventTrackersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventTrackersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
