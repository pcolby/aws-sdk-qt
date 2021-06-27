/*
    Copyright 2013-2021 Paul Colby

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
    return static_cast<const CreateEventTrackerRequest *>(PersonalizeResponse::request());
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
