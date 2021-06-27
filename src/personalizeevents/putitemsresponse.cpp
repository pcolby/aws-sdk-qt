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

#include "putitemsresponse.h"
#include "putitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PutItemsResponse
 * \brief The PutItemsResponse class provides an interace for PersonalizeEvents PutItems responses.
 *
 * \inmodule QtAwsPersonalizeEvents
 *
 *  Amazon Personalize can consume real-time user event data, such as <i>stream</i> or <i>click</i> data, and use it for
 *  model training either alone or combined with historical data. For more information see <a
 *  href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
 *
 * \sa PersonalizeEventsClient::putItems
 */

/*!
 * Constructs a PutItemsResponse object for \a reply to \a request, with parent \a parent.
 */
PutItemsResponse::PutItemsResponse(
        const PutItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeEventsResponse(new PutItemsResponsePrivate(this), parent)
{
    setRequest(new PutItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutItemsRequest * PutItemsResponse::request() const
{
    return static_cast<const PutItemsRequest *>(PersonalizeEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful PersonalizeEvents PutItems \a response.
 */
void PutItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PersonalizeEvents::PutItemsResponsePrivate
 * \brief The PutItemsResponsePrivate class provides private implementation for PutItemsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PutItemsResponsePrivate object with public implementation \a q.
 */
PutItemsResponsePrivate::PutItemsResponsePrivate(
    PutItemsResponse * const q) : PersonalizeEventsResponsePrivate(q)
{

}

/*!
 * Parses a PersonalizeEvents PutItems response element from \a xml.
 */
void PutItemsResponsePrivate::parsePutItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PersonalizeEvents
} // namespace QtAws
