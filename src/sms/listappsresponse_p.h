// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSRESPONSE_P_H
#define QTAWS_LISTAPPSRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class ListAppsResponse;

class ListAppsResponsePrivate : public SmsResponsePrivate {

public:

    explicit ListAppsResponsePrivate(ListAppsResponse * const q);

    void parseListAppsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppsResponse)
    Q_DISABLE_COPY(ListAppsResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
