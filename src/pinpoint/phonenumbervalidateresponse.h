// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PHONENUMBERVALIDATERESPONSE_H
#define QTAWS_PHONENUMBERVALIDATERESPONSE_H

#include "pinpointresponse.h"
#include "phonenumbervalidaterequest.h"

namespace QtAws {
namespace Pinpoint {

class PhoneNumberValidateResponsePrivate;

class QTAWSPINPOINT_EXPORT PhoneNumberValidateResponse : public PinpointResponse {
    Q_OBJECT

public:
    PhoneNumberValidateResponse(const PhoneNumberValidateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PhoneNumberValidateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PhoneNumberValidateResponse)
    Q_DISABLE_COPY(PhoneNumberValidateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
