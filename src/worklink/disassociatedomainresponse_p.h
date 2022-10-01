// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDOMAINRESPONSE_P_H
#define QTAWS_DISASSOCIATEDOMAINRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DisassociateDomainResponse;

class DisassociateDomainResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DisassociateDomainResponsePrivate(DisassociateDomainResponse * const q);

    void parseDisassociateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDomainResponse)
    Q_DISABLE_COPY(DisassociateDomainResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
