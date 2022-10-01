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

#include "verifyotpmessageresponse.h"
#include "verifyotpmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::VerifyOTPMessageResponse
 * \brief The VerifyOTPMessageResponse class provides an interace for Pinpoint VerifyOTPMessage responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::verifyOTPMessage
 */

/*!
 * Constructs a VerifyOTPMessageResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyOTPMessageResponse::VerifyOTPMessageResponse(
        const VerifyOTPMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new VerifyOTPMessageResponsePrivate(this), parent)
{
    setRequest(new VerifyOTPMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyOTPMessageRequest * VerifyOTPMessageResponse::request() const
{
    Q_D(const VerifyOTPMessageResponse);
    return static_cast<const VerifyOTPMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint VerifyOTPMessage \a response.
 */
void VerifyOTPMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyOTPMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::VerifyOTPMessageResponsePrivate
 * \brief The VerifyOTPMessageResponsePrivate class provides private implementation for VerifyOTPMessageResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a VerifyOTPMessageResponsePrivate object with public implementation \a q.
 */
VerifyOTPMessageResponsePrivate::VerifyOTPMessageResponsePrivate(
    VerifyOTPMessageResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint VerifyOTPMessage response element from \a xml.
 */
void VerifyOTPMessageResponsePrivate::parseVerifyOTPMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyOTPMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
