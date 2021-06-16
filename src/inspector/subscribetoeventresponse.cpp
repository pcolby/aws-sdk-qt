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

#include "subscribetoeventresponse.h"
#include "subscribetoeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SubscribeToEventResponse
 * \brief The SubscribeToEventResponse class provides an interace for Inspector SubscribeToEvent responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::subscribeToEvent
 */

/*!
 * Constructs a SubscribeToEventResponse object for \a reply to \a request, with parent \a parent.
 */
SubscribeToEventResponse::SubscribeToEventResponse(
        const SubscribeToEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new SubscribeToEventResponsePrivate(this), parent)
{
    setRequest(new SubscribeToEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubscribeToEventRequest * SubscribeToEventResponse::request() const
{
    Q_D(const SubscribeToEventResponse);
    return static_cast<const SubscribeToEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector SubscribeToEvent \a response.
 */
void SubscribeToEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubscribeToEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::SubscribeToEventResponsePrivate
 * \brief The SubscribeToEventResponsePrivate class provides private implementation for SubscribeToEventResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a SubscribeToEventResponsePrivate object with public implementation \a q.
 */
SubscribeToEventResponsePrivate::SubscribeToEventResponsePrivate(
    SubscribeToEventResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector SubscribeToEvent response element from \a xml.
 */
void SubscribeToEventResponsePrivate::parseSubscribeToEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeToEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
