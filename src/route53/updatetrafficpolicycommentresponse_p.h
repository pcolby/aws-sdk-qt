// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYCOMMENTRESPONSE_P_H
#define QTAWS_UPDATETRAFFICPOLICYCOMMENTRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyCommentResponse;

class UpdateTrafficPolicyCommentResponsePrivate : public Route53ResponsePrivate {

public:

    explicit UpdateTrafficPolicyCommentResponsePrivate(UpdateTrafficPolicyCommentResponse * const q);

    void parseUpdateTrafficPolicyCommentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrafficPolicyCommentResponse)
    Q_DISABLE_COPY(UpdateTrafficPolicyCommentResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
