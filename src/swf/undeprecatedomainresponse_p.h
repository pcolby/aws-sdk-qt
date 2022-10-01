// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEDOMAINRESPONSE_P_H
#define QTAWS_UNDEPRECATEDOMAINRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class UndeprecateDomainResponse;

class UndeprecateDomainResponsePrivate : public SwfResponsePrivate {

public:

    explicit UndeprecateDomainResponsePrivate(UndeprecateDomainResponse * const q);

    void parseUndeprecateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UndeprecateDomainResponse)
    Q_DISABLE_COPY(UndeprecateDomainResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
