// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBOUNCERESPONSE_P_H
#define QTAWS_SENDBOUNCERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SendBounceResponse;

class SendBounceResponsePrivate : public SesResponsePrivate {

public:

    explicit SendBounceResponsePrivate(SendBounceResponse * const q);

    void parseSendBounceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendBounceResponse)
    Q_DISABLE_COPY(SendBounceResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
