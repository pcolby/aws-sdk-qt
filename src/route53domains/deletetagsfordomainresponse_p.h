// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSFORDOMAINRESPONSE_P_H
#define QTAWS_DELETETAGSFORDOMAINRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class DeleteTagsForDomainResponse;

class DeleteTagsForDomainResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit DeleteTagsForDomainResponsePrivate(DeleteTagsForDomainResponse * const q);

    void parseDeleteTagsForDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTagsForDomainResponse)
    Q_DISABLE_COPY(DeleteTagsForDomainResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
