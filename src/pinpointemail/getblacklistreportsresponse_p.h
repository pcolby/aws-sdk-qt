// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSRESPONSE_P_H
#define QTAWS_GETBLACKLISTREPORTSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetBlacklistReportsResponse;

class GetBlacklistReportsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetBlacklistReportsResponsePrivate(GetBlacklistReportsResponse * const q);

    void parseGetBlacklistReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlacklistReportsResponse)
    Q_DISABLE_COPY(GetBlacklistReportsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
