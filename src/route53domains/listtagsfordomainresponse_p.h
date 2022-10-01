// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDOMAINRESPONSE_P_H
#define QTAWS_LISTTAGSFORDOMAINRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class ListTagsForDomainResponse;

class ListTagsForDomainResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit ListTagsForDomainResponsePrivate(ListTagsForDomainResponse * const q);

    void parseListTagsForDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForDomainResponse)
    Q_DISABLE_COPY(ListTagsForDomainResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
