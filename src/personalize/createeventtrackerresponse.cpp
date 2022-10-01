// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createeventtrackerresponse.h"
#include "createeventtrackerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateEventTrackerResponse
 * \brief The CreateEventTrackerResponse class provides an interace for Personalize CreateEventTracker responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createEventTracker
 */

/*!
 * Constructs a CreateEventTrackerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventTrackerResponse::CreateEventTrackerResponse(
        const CreateEventTrackerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateEventTrackerResponsePrivate(this), parent)
{
    setRequest(new CreateEventTrackerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventTrackerRequest * CreateEventTrackerResponse::request() const
{
    Q_D(const CreateEventTrackerResponse);
    return static_cast<const CreateEventTrackerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateEventTracker \a response.
 */
void CreateEventTrackerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventTrackerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateEventTrackerResponsePrivate
 * \brief The CreateEventTrackerResponsePrivate class provides private implementation for CreateEventTrackerResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateEventTrackerResponsePrivate object with public implementation \a q.
 */
CreateEventTrackerResponsePrivate::CreateEventTrackerResponsePrivate(
    CreateEventTrackerResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateEventTracker response element from \a xml.
 */
void CreateEventTrackerResponsePrivate::parseCreateEventTrackerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventTrackerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
