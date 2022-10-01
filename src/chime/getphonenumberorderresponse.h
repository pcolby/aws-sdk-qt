// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERORDERRESPONSE_H
#define QTAWS_GETPHONENUMBERORDERRESPONSE_H

#include "chimeresponse.h"
#include "getphonenumberorderrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberOrderResponsePrivate;

class QTAWSCHIME_EXPORT GetPhoneNumberOrderResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetPhoneNumberOrderResponse(const GetPhoneNumberOrderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPhoneNumberOrderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPhoneNumberOrderResponse)
    Q_DISABLE_COPY(GetPhoneNumberOrderResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
