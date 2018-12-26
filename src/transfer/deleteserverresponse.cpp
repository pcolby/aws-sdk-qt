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

#include "deleteserverresponse.h"
#include "deleteserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteServerResponse
 * \brief The DeleteServerResponse class provides an interace for Transfer DeleteServer responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::deleteServer
 */

/*!
 * Constructs a DeleteServerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServerResponse::DeleteServerResponse(
        const DeleteServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteServerResponsePrivate(this), parent)
{
    setRequest(new DeleteServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServerRequest * DeleteServerResponse::request() const
{
    Q_D(const DeleteServerResponse);
    return static_cast<const DeleteServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteServer \a response.
 */
void DeleteServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteServerResponsePrivate
 * \brief The DeleteServerResponsePrivate class provides private implementation for DeleteServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteServerResponsePrivate object with public implementation \a q.
 */
DeleteServerResponsePrivate::DeleteServerResponsePrivate(
    DeleteServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteServer response element from \a xml.
 */
void DeleteServerResponsePrivate::parseDeleteServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
