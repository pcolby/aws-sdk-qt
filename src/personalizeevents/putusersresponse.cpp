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

#include "putusersresponse.h"
#include "putusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PutUsersResponse
 * \brief The PutUsersResponse class provides an interace for PersonalizeEvents PutUsers responses.
 *
 * \inmodule QtAwsPersonalizeEvents
 *
 *  Amazon Personalize can consume real-time user event data, such as <i>stream</i> or <i>click</i> data, and use it for
 *  model training either alone or combined with historical data. For more information see <a
 *  href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 *
 * \sa PersonalizeEventsClient::putUsers
 */

/*!
 * Constructs a PutUsersResponse object for \a reply to \a request, with parent \a parent.
 */
PutUsersResponse::PutUsersResponse(
        const PutUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeEventsResponse(new PutUsersResponsePrivate(this), parent)
{
    setRequest(new PutUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutUsersRequest * PutUsersResponse::request() const
{
    return static_cast<const PutUsersRequest *>(PersonalizeEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful PersonalizeEvents PutUsers \a response.
 */
void PutUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PersonalizeEvents::PutUsersResponsePrivate
 * \brief The PutUsersResponsePrivate class provides private implementation for PutUsersResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PutUsersResponsePrivate object with public implementation \a q.
 */
PutUsersResponsePrivate::PutUsersResponsePrivate(
    PutUsersResponse * const q) : PersonalizeEventsResponsePrivate(q)
{

}

/*!
 * Parses a PersonalizeEvents PutUsers response element from \a xml.
 */
void PutUsersResponsePrivate::parsePutUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PersonalizeEvents
} // namespace QtAws
