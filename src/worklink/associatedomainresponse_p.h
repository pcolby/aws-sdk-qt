// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDOMAINRESPONSE_P_H
#define QTAWS_ASSOCIATEDOMAINRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class AssociateDomainResponse;

class AssociateDomainResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit AssociateDomainResponsePrivate(AssociateDomainResponse * const q);

    void parseAssociateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDomainResponse)
    Q_DISABLE_COPY(AssociateDomainResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
