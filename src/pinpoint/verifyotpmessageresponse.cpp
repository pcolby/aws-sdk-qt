// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
