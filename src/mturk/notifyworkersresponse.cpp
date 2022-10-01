// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyworkersresponse.h"
#include "notifyworkersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::NotifyWorkersResponse
 * \brief The NotifyWorkersResponse class provides an interace for MTurk NotifyWorkers responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::notifyWorkers
 */

/*!
 * Constructs a NotifyWorkersResponse object for \a reply to \a request, with parent \a parent.
 */
NotifyWorkersResponse::NotifyWorkersResponse(
        const NotifyWorkersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new NotifyWorkersResponsePrivate(this), parent)
{
    setRequest(new NotifyWorkersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const NotifyWorkersRequest * NotifyWorkersResponse::request() const
{
    Q_D(const NotifyWorkersResponse);
    return static_cast<const NotifyWorkersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk NotifyWorkers \a response.
 */
void NotifyWorkersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(NotifyWorkersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::NotifyWorkersResponsePrivate
 * \brief The NotifyWorkersResponsePrivate class provides private implementation for NotifyWorkersResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a NotifyWorkersResponsePrivate object with public implementation \a q.
 */
NotifyWorkersResponsePrivate::NotifyWorkersResponsePrivate(
    NotifyWorkersResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk NotifyWorkers response element from \a xml.
 */
void NotifyWorkersResponsePrivate::parseNotifyWorkersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyWorkersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
