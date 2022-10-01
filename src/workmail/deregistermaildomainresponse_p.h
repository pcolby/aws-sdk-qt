// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMAILDOMAINRESPONSE_P_H
#define QTAWS_DEREGISTERMAILDOMAINRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeregisterMailDomainResponse;

class DeregisterMailDomainResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeregisterMailDomainResponsePrivate(DeregisterMailDomainResponse * const q);

    void parseDeregisterMailDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterMailDomainResponse)
    Q_DISABLE_COPY(DeregisterMailDomainResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
