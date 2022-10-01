// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEPHONENUMBERRESPONSE_H
#define QTAWS_RELEASEPHONENUMBERRESPONSE_H

#include "connectresponse.h"
#include "releasephonenumberrequest.h"

namespace QtAws {
namespace Connect {

class ReleasePhoneNumberResponsePrivate;

class QTAWSCONNECT_EXPORT ReleasePhoneNumberResponse : public ConnectResponse {
    Q_OBJECT

public:
    ReleasePhoneNumberResponse(const ReleasePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleasePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleasePhoneNumberResponse)
    Q_DISABLE_COPY(ReleasePhoneNumberResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
