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

#include "disassociateconnectorresponse.h"
#include "disassociateconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DisassociateConnectorResponse
 * \brief The DisassociateConnectorResponse class provides an interace for SMS DisassociateConnector responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::disassociateConnector
 */

/*!
 * Constructs a DisassociateConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateConnectorResponse::DisassociateConnectorResponse(
        const DisassociateConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DisassociateConnectorResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateConnectorRequest * DisassociateConnectorResponse::request() const
{
    Q_D(const DisassociateConnectorResponse);
    return static_cast<const DisassociateConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS DisassociateConnector \a response.
 */
void DisassociateConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::DisassociateConnectorResponsePrivate
 * \brief The DisassociateConnectorResponsePrivate class provides private implementation for DisassociateConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a DisassociateConnectorResponsePrivate object with public implementation \a q.
 */
DisassociateConnectorResponsePrivate::DisassociateConnectorResponsePrivate(
    DisassociateConnectorResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS DisassociateConnector response element from \a xml.
 */
void DisassociateConnectorResponsePrivate::parseDisassociateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
