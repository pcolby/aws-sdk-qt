// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORDOMAINRESPONSE_P_H
#define QTAWS_UPDATETAGSFORDOMAINRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class UpdateTagsForDomainResponse;

class UpdateTagsForDomainResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit UpdateTagsForDomainResponsePrivate(UpdateTagsForDomainResponse * const q);

    void parseUpdateTagsForDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTagsForDomainResponse)
    Q_DISABLE_COPY(UpdateTagsForDomainResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
