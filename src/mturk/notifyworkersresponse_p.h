// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWORKERSRESPONSE_P_H
#define QTAWS_NOTIFYWORKERSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class NotifyWorkersResponse;

class NotifyWorkersResponsePrivate : public MTurkResponsePrivate {

public:

    explicit NotifyWorkersResponsePrivate(NotifyWorkersResponse * const q);

    void parseNotifyWorkersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyWorkersResponse)
    Q_DISABLE_COPY(NotifyWorkersResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
