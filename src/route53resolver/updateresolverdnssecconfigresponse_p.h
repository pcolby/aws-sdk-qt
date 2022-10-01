// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERDNSSECCONFIGRESPONSE_P_H
#define QTAWS_UPDATERESOLVERDNSSECCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverDnssecConfigResponse;

class UpdateResolverDnssecConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateResolverDnssecConfigResponsePrivate(UpdateResolverDnssecConfigResponse * const q);

    void parseUpdateResolverDnssecConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResolverDnssecConfigResponse)
    Q_DISABLE_COPY(UpdateResolverDnssecConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
