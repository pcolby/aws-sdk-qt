// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDRESPONSE_P_H
#define QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetIdentityHeadersInNotificationsEnabledResponse;

class SetIdentityHeadersInNotificationsEnabledResponsePrivate : public SesResponsePrivate {

public:

    explicit SetIdentityHeadersInNotificationsEnabledResponsePrivate(SetIdentityHeadersInNotificationsEnabledResponse * const q);

    void parseSetIdentityHeadersInNotificationsEnabledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityHeadersInNotificationsEnabledResponse)
    Q_DISABLE_COPY(SetIdentityHeadersInNotificationsEnabledResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
