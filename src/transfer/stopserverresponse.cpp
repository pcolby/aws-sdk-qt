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

#include "stopserverresponse.h"
#include "stopserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StopServerResponse
 * \brief The StopServerResponse class provides an interace for Transfer StopServer responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::stopServer
 */

/*!
 * Constructs a StopServerResponse object for \a reply to \a request, with parent \a parent.
 */
StopServerResponse::StopServerResponse(
        const StopServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new StopServerResponsePrivate(this), parent)
{
    setRequest(new StopServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopServerRequest * StopServerResponse::request() const
{
    Q_D(const StopServerResponse);
    return static_cast<const StopServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer StopServer \a response.
 */
void StopServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::StopServerResponsePrivate
 * \brief The StopServerResponsePrivate class provides private implementation for StopServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StopServerResponsePrivate object with public implementation \a q.
 */
StopServerResponsePrivate::StopServerResponsePrivate(
    StopServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer StopServer response element from \a xml.
 */
void StopServerResponsePrivate::parseStopServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
