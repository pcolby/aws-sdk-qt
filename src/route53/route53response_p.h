// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESPONSE_P_H
#define QTAWS_ROUTE53RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53 {

class Route53Response;

class Route53ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53ResponsePrivate(Route53Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53Response)
    Q_DISABLE_COPY(Route53ResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
