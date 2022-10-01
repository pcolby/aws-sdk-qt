// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53DOMAINSRESPONSE_P_H
#define QTAWS_ROUTE53DOMAINSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class Route53DomainsResponse;

class Route53DomainsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53DomainsResponsePrivate(Route53DomainsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53DomainsResponse)
    Q_DISABLE_COPY(Route53DomainsResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
