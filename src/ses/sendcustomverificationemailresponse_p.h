// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_P_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SendCustomVerificationEmailResponse;

class SendCustomVerificationEmailResponsePrivate : public SesResponsePrivate {

public:

    explicit SendCustomVerificationEmailResponsePrivate(SendCustomVerificationEmailResponse * const q);

    void parseSendCustomVerificationEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendCustomVerificationEmailResponse)
    Q_DISABLE_COPY(SendCustomVerificationEmailResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
