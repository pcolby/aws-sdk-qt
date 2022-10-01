// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_P_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class SendCustomVerificationEmailResponse;

class SendCustomVerificationEmailResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit SendCustomVerificationEmailResponsePrivate(SendCustomVerificationEmailResponse * const q);

    void parseSendCustomVerificationEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendCustomVerificationEmailResponse)
    Q_DISABLE_COPY(SendCustomVerificationEmailResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
