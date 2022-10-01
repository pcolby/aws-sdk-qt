// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "phonenumbervalidateresponse.h"
#include "phonenumbervalidateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PhoneNumberValidateResponse
 * \brief The PhoneNumberValidateResponse class provides an interace for Pinpoint PhoneNumberValidate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::phoneNumberValidate
 */

/*!
 * Constructs a PhoneNumberValidateResponse object for \a reply to \a request, with parent \a parent.
 */
PhoneNumberValidateResponse::PhoneNumberValidateResponse(
        const PhoneNumberValidateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new PhoneNumberValidateResponsePrivate(this), parent)
{
    setRequest(new PhoneNumberValidateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PhoneNumberValidateRequest * PhoneNumberValidateResponse::request() const
{
    Q_D(const PhoneNumberValidateResponse);
    return static_cast<const PhoneNumberValidateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint PhoneNumberValidate \a response.
 */
void PhoneNumberValidateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PhoneNumberValidateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::PhoneNumberValidateResponsePrivate
 * \brief The PhoneNumberValidateResponsePrivate class provides private implementation for PhoneNumberValidateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PhoneNumberValidateResponsePrivate object with public implementation \a q.
 */
PhoneNumberValidateResponsePrivate::PhoneNumberValidateResponsePrivate(
    PhoneNumberValidateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint PhoneNumberValidate response element from \a xml.
 */
void PhoneNumberValidateResponsePrivate::parsePhoneNumberValidateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PhoneNumberValidateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
