// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEDOMAINRESPONSE_P_H
#define QTAWS_DEPRECATEDOMAINRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class DeprecateDomainResponse;

class DeprecateDomainResponsePrivate : public SwfResponsePrivate {

public:

    explicit DeprecateDomainResponsePrivate(DeprecateDomainResponse * const q);

    void parseDeprecateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprecateDomainResponse)
    Q_DISABLE_COPY(DeprecateDomainResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
