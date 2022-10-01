// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEAPPRESPONSE_P_H
#define QTAWS_TERMINATEAPPRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class TerminateAppResponse;

class TerminateAppResponsePrivate : public SmsResponsePrivate {

public:

    explicit TerminateAppResponsePrivate(TerminateAppResponse * const q);

    void parseTerminateAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateAppResponse)
    Q_DISABLE_COPY(TerminateAppResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
