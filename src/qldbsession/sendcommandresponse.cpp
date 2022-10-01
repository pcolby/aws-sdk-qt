// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendcommandresponse.h"
#include "sendcommandresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QldbSession {

/*!
 * \class QtAws::QldbSession::SendCommandResponse
 * \brief The SendCommandResponse class provides an interace for QldbSession SendCommand responses.
 *
 * \inmodule QtAwsQldbSession
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
 * \sa QldbSessionClient::sendCommand
 */

/*!
 * Constructs a SendCommandResponse object for \a reply to \a request, with parent \a parent.
 */
SendCommandResponse::SendCommandResponse(
        const SendCommandRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbSessionResponse(new SendCommandResponsePrivate(this), parent)
{
    setRequest(new SendCommandRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendCommandRequest * SendCommandResponse::request() const
{
    Q_D(const SendCommandResponse);
    return static_cast<const SendCommandRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QldbSession SendCommand \a response.
 */
void SendCommandResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendCommandResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QldbSession::SendCommandResponsePrivate
 * \brief The SendCommandResponsePrivate class provides private implementation for SendCommandResponse.
 * \internal
 *
 * \inmodule QtAwsQldbSession
 */

/*!
 * Constructs a SendCommandResponsePrivate object with public implementation \a q.
 */
SendCommandResponsePrivate::SendCommandResponsePrivate(
    SendCommandResponse * const q) : QldbSessionResponsePrivate(q)
{

}

/*!
 * Parses a QldbSession SendCommand response element from \a xml.
 */
void SendCommandResponsePrivate::parseSendCommandResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendCommandResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QldbSession
} // namespace QtAws
