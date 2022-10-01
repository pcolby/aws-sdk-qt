// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDVALIDATIONEMAILRESPONSE_P_H
#define QTAWS_RESENDVALIDATIONEMAILRESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class ResendValidationEmailResponse;

class ResendValidationEmailResponsePrivate : public AcmResponsePrivate {

public:

    explicit ResendValidationEmailResponsePrivate(ResendValidationEmailResponse * const q);

    void parseResendValidationEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResendValidationEmailResponse)
    Q_DISABLE_COPY(ResendValidationEmailResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
