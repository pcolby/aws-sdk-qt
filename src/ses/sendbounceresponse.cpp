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

#include "sendbounceresponse.h"
#include "sendbounceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SendBounceResponse
 * \brief The SendBounceResponse class provides an interace for SES SendBounce responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::sendBounce
 */

/*!
 * Constructs a SendBounceResponse object for \a reply to \a request, with parent \a parent.
 */
SendBounceResponse::SendBounceResponse(
        const SendBounceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendBounceResponsePrivate(this), parent)
{
    setRequest(new SendBounceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendBounceRequest * SendBounceResponse::request() const
{
    Q_D(const SendBounceResponse);
    return static_cast<const SendBounceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES SendBounce \a response.
 */
void SendBounceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendBounceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::SendBounceResponsePrivate
 * \brief The SendBounceResponsePrivate class provides private implementation for SendBounceResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a SendBounceResponsePrivate object with public implementation \a q.
 */
SendBounceResponsePrivate::SendBounceResponsePrivate(
    SendBounceResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES SendBounce response element from \a xml.
 */
void SendBounceResponsePrivate::parseSendBounceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBounceResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
