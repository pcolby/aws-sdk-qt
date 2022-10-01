// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESRESPONSE_P_H
#define QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class ListCustomVerificationEmailTemplatesResponse;

class ListCustomVerificationEmailTemplatesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit ListCustomVerificationEmailTemplatesResponsePrivate(ListCustomVerificationEmailTemplatesResponse * const q);

    void parseListCustomVerificationEmailTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomVerificationEmailTemplatesResponse)
    Q_DISABLE_COPY(ListCustomVerificationEmailTemplatesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
