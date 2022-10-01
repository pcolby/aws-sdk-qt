// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unsubscribefromeventresponse.h"
#include "unsubscribefromeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventResponse
 * \brief The UnsubscribeFromEventResponse class provides an interace for Inspector UnsubscribeFromEvent responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::unsubscribeFromEvent
 */

/*!
 * Constructs a UnsubscribeFromEventResponse object for \a reply to \a request, with parent \a parent.
 */
UnsubscribeFromEventResponse::UnsubscribeFromEventResponse(
        const UnsubscribeFromEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new UnsubscribeFromEventResponsePrivate(this), parent)
{
    setRequest(new UnsubscribeFromEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnsubscribeFromEventRequest * UnsubscribeFromEventResponse::request() const
{
    Q_D(const UnsubscribeFromEventResponse);
    return static_cast<const UnsubscribeFromEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector UnsubscribeFromEvent \a response.
 */
void UnsubscribeFromEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnsubscribeFromEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventResponsePrivate
 * \brief The UnsubscribeFromEventResponsePrivate class provides private implementation for UnsubscribeFromEventResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a UnsubscribeFromEventResponsePrivate object with public implementation \a q.
 */
UnsubscribeFromEventResponsePrivate::UnsubscribeFromEventResponsePrivate(
    UnsubscribeFromEventResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector UnsubscribeFromEvent response element from \a xml.
 */
void UnsubscribeFromEventResponsePrivate::parseUnsubscribeFromEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnsubscribeFromEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
