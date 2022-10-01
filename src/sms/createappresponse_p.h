// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPRESPONSE_P_H
#define QTAWS_CREATEAPPRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class CreateAppResponse;

class CreateAppResponsePrivate : public SmsResponsePrivate {

public:

    explicit CreateAppResponsePrivate(CreateAppResponse * const q);

    void parseCreateAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppResponse)
    Q_DISABLE_COPY(CreateAppResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
