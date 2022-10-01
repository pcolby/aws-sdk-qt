// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTMAILDOMAINRESPONSE_P_H
#define QTAWS_UPDATEDEFAULTMAILDOMAINRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class UpdateDefaultMailDomainResponse;

class UpdateDefaultMailDomainResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit UpdateDefaultMailDomainResponsePrivate(UpdateDefaultMailDomainResponse * const q);

    void parseUpdateDefaultMailDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDefaultMailDomainResponse)
    Q_DISABLE_COPY(UpdateDefaultMailDomainResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
