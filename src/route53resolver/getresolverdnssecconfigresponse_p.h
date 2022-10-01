// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERDNSSECCONFIGRESPONSE_P_H
#define QTAWS_GETRESOLVERDNSSECCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverDnssecConfigResponse;

class GetResolverDnssecConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverDnssecConfigResponsePrivate(GetResolverDnssecConfigResponse * const q);

    void parseGetResolverDnssecConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverDnssecConfigResponse)
    Q_DISABLE_COPY(GetResolverDnssecConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
