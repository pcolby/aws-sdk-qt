// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const PutItemsResponse);
    return static_cast<const PutItemsRequest *>(d->request);
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
