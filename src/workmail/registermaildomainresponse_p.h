// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERMAILDOMAINRESPONSE_P_H
#define QTAWS_REGISTERMAILDOMAINRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class RegisterMailDomainResponse;

class RegisterMailDomainResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit RegisterMailDomainResponsePrivate(RegisterMailDomainResponse * const q);

    void parseRegisterMailDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterMailDomainResponse)
    Q_DISABLE_COPY(RegisterMailDomainResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
