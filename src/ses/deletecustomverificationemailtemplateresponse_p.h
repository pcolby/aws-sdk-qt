// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteCustomVerificationEmailTemplateResponse;

class DeleteCustomVerificationEmailTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteCustomVerificationEmailTemplateResponsePrivate(DeleteCustomVerificationEmailTemplateResponse * const q);

    void parseDeleteCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(DeleteCustomVerificationEmailTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
