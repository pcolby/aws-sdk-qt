// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESOLVERRESPONSE_P_H
#define QTAWS_ROUTE53RESOLVERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverResponse;

class Route53ResolverResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53ResolverResponsePrivate(Route53ResolverResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53ResolverResponse)
    Q_DISABLE_COPY(Route53ResolverResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
