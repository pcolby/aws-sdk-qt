// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILRESPONSE_P_H
#define QTAWS_SENDEMAILRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class SendEmailResponse;

class SendEmailResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit SendEmailResponsePrivate(SendEmailResponse * const q);

    void parseSendEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendEmailResponse)
    Q_DISABLE_COPY(SendEmailResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
