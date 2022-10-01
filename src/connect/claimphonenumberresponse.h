// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMPHONENUMBERRESPONSE_H
#define QTAWS_CLAIMPHONENUMBERRESPONSE_H

#include "connectresponse.h"
#include "claimphonenumberrequest.h"

namespace QtAws {
namespace Connect {

class ClaimPhoneNumberResponsePrivate;

class QTAWSCONNECT_EXPORT ClaimPhoneNumberResponse : public ConnectResponse {
    Q_OBJECT

public:
    ClaimPhoneNumberResponse(const ClaimPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ClaimPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimPhoneNumberResponse)
    Q_DISABLE_COPY(ClaimPhoneNumberResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
