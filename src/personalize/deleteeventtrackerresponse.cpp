// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventtrackerresponse.h"
#include "deleteeventtrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteEventTrackerResponse
 * \brief The DeleteEventTrackerResponse class provides an interace for Personalize DeleteEventTracker responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteEventTracker
 */

/*!
 * Constructs a DeleteEventTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventTrackerResponse::DeleteEventTrackerResponse(
        const DeleteEventTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteEventTrackerResponsePrivate(this), parent)
{
    setRequest(new DeleteEventTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventTrackerRequest * DeleteEventTrackerResponse::request() const
{
    Q_D(const DeleteEventTrackerResponse);
    return static_cast<const DeleteEventTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteEventTracker \a response.
 */
void DeleteEventTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteEventTrackerResponsePrivate
 * \brief The DeleteEventTrackerResponsePrivate class provides private implementation for DeleteEventTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteEventTrackerResponsePrivate object with public implementation \a q.
 */
DeleteEventTrackerResponsePrivate::DeleteEventTrackerResponsePrivate(
    DeleteEventTrackerResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteEventTracker response element from \a xml.
 */
void DeleteEventTrackerResponsePrivate::parseDeleteEventTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
