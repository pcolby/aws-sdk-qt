/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(NotifyWorkersResponse);
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
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
