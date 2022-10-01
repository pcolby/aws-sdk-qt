// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECHANGESETRESPONSE_P_H
#define QTAWS_GENERATECHANGESETRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GenerateChangeSetResponse;

class GenerateChangeSetResponsePrivate : public SmsResponsePrivate {

public:

    explicit GenerateChangeSetResponsePrivate(GenerateChangeSetResponse * const q);

    void parseGenerateChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateChangeSetResponse)
    Q_DISABLE_COPY(GenerateChangeSetResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
