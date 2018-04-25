/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteworkerblockresponse.h"
#include "deleteworkerblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockResponse
 * \brief The DeleteWorkerBlockResponse class provides an interace for MTurk DeleteWorkerBlock responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteWorkerBlock
 */

/*!
 * Constructs a DeleteWorkerBlockResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkerBlockResponse::DeleteWorkerBlockResponse(
        const DeleteWorkerBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteWorkerBlockResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkerBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkerBlockRequest * DeleteWorkerBlockResponse::request() const
{
    Q_D(const DeleteWorkerBlockResponse);
    return static_cast<const DeleteWorkerBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk DeleteWorkerBlock \a response.
 */
void DeleteWorkerBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteWorkerBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockResponsePrivate
 * \brief The DeleteWorkerBlockResponsePrivate class provides private implementation for DeleteWorkerBlockResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteWorkerBlockResponsePrivate object with public implementation \a q.
 */
DeleteWorkerBlockResponsePrivate::DeleteWorkerBlockResponsePrivate(
    DeleteWorkerBlockResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DeleteWorkerBlock response element from \a xml.
 */
void DeleteWorkerBlockResponsePrivate::parseDeleteWorkerBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkerBlockResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
