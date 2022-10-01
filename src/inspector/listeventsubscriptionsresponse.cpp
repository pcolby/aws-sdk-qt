// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventsubscriptionsresponse.h"
#include "listeventsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListEventSubscriptionsResponse
 * \brief The ListEventSubscriptionsResponse class provides an interace for Inspector ListEventSubscriptions responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listEventSubscriptions
 */

/*!
 * Constructs a ListEventSubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventSubscriptionsResponse::ListEventSubscriptionsResponse(
        const ListEventSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListEventSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new ListEventSubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventSubscriptionsRequest * ListEventSubscriptionsResponse::request() const
{
    Q_D(const ListEventSubscriptionsResponse);
    return static_cast<const ListEventSubscriptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector ListEventSubscriptions \a response.
 */
void ListEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListEventSubscriptionsResponsePrivate
 * \brief The ListEventSubscriptionsResponsePrivate class provides private implementation for ListEventSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListEventSubscriptionsResponsePrivate object with public implementation \a q.
 */
ListEventSubscriptionsResponsePrivate::ListEventSubscriptionsResponsePrivate(
    ListEventSubscriptionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListEventSubscriptions response element from \a xml.
 */
void ListEventSubscriptionsResponsePrivate::parseListEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventSubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
