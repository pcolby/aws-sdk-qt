// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
