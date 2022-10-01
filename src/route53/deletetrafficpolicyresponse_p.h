// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYRESPONSE_P_H
#define QTAWS_DELETETRAFFICPOLICYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyResponse;

class DeleteTrafficPolicyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteTrafficPolicyResponsePrivate(DeleteTrafficPolicyResponse * const q);

    void parseDeleteTrafficPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficPolicyResponse)
    Q_DISABLE_COPY(DeleteTrafficPolicyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
