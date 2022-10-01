// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESRESPONSE_P_H
#define QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListCustomVerificationEmailTemplatesResponse;

class ListCustomVerificationEmailTemplatesResponsePrivate : public SesResponsePrivate {

public:

    explicit ListCustomVerificationEmailTemplatesResponsePrivate(ListCustomVerificationEmailTemplatesResponse * const q);

    void parseListCustomVerificationEmailTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomVerificationEmailTemplatesResponse)
    Q_DISABLE_COPY(ListCustomVerificationEmailTemplatesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
