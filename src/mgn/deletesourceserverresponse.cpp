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

#include "deletesourceserverresponse.h"
#include "deletesourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DeleteSourceServerResponse
 * \brief The DeleteSourceServerResponse class provides an interace for mgn DeleteSourceServer responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::deleteSourceServer
 */

/*!
 * Constructs a DeleteSourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSourceServerResponse::DeleteSourceServerResponse(
        const DeleteSourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DeleteSourceServerResponsePrivate(this), parent)
{
    setRequest(new DeleteSourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSourceServerRequest * DeleteSourceServerResponse::request() const
{
    Q_D(const DeleteSourceServerResponse);
    return static_cast<const DeleteSourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn DeleteSourceServer \a response.
 */
void DeleteSourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DeleteSourceServerResponsePrivate
 * \brief The DeleteSourceServerResponsePrivate class provides private implementation for DeleteSourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DeleteSourceServerResponsePrivate object with public implementation \a q.
 */
DeleteSourceServerResponsePrivate::DeleteSourceServerResponsePrivate(
    DeleteSourceServerResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DeleteSourceServer response element from \a xml.
 */
void DeleteSourceServerResponsePrivate::parseDeleteSourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
