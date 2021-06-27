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

#include "sendcommandresponse.h"
#include "sendcommandresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDBSession {

/*!
 * \class QtAws::QLDBSession::SendCommandResponse
 * \brief The SendCommandResponse class provides an interace for QLDBSession SendCommand responses.
 *
 * \inmodule QtAwsQLDBSession
 *
 *  The transactional data APIs for Amazon
 * 
 *  QLD> <note>
 * 
 *  Instead of interacting directly with this API, we recommend using the QLDB driver or the QLDB shell to execute data
 *  transactions on a
 * 
 *  ledger> <ul> <li>
 * 
 *  If you are working with an AWS SDK, use the QLDB driver. The driver provides a high-level abstraction layer above this
 *  <i>QLDB Session</i> data plane and manages <code>SendCommand</code> API calls for you. For information and a list of
 *  supported programming languages, see <a
 *  href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting started with the
 *  driver</a> in the <i>Amazon QLDB Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  If you are working with the AWS Command Line Interface (AWS CLI), use the QLDB shell. The shell is a command line
 *  interface that uses the QLDB driver to interact with a ledger. For information, see <a
 *  href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing Amazon QLDB using the QLDB
 *
 * \sa QLDBSessionClient::sendCommand
 */

/*!
 * Constructs a SendCommandResponse object for \a reply to \a request, with parent \a parent.
 */
SendCommandResponse::SendCommandResponse(
        const SendCommandRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QLDBSessionResponse(new SendCommandResponsePrivate(this), parent)
{
    setRequest(new SendCommandRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendCommandRequest * SendCommandResponse::request() const
{
    return static_cast<const SendCommandRequest *>(QLDBSessionResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDBSession SendCommand \a response.
 */
void SendCommandResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendCommandResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDBSession::SendCommandResponsePrivate
 * \brief The SendCommandResponsePrivate class provides private implementation for SendCommandResponse.
 * \internal
 *
 * \inmodule QtAwsQLDBSession
 */

/*!
 * Constructs a SendCommandResponsePrivate object with public implementation \a q.
 */
SendCommandResponsePrivate::SendCommandResponsePrivate(
    SendCommandResponse * const q) : QLDBSessionResponsePrivate(q)
{

}

/*!
 * Parses a QLDBSession SendCommand response element from \a xml.
 */
void SendCommandResponsePrivate::parseSendCommandResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendCommandResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDBSession
} // namespace QtAws
