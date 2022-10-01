// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDOMAINRESPONSE_P_H
#define QTAWS_REGISTERDOMAINRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RegisterDomainResponse;

class RegisterDomainResponsePrivate : public SwfResponsePrivate {

public:

    explicit RegisterDomainResponsePrivate(RegisterDomainResponse * const q);

    void parseRegisterDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterDomainResponse)
    Q_DISABLE_COPY(RegisterDomainResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
