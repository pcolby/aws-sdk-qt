// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTEDZONECOMMENTRESPONSE_P_H
#define QTAWS_UPDATEHOSTEDZONECOMMENTRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class UpdateHostedZoneCommentResponse;

class UpdateHostedZoneCommentResponsePrivate : public Route53ResponsePrivate {

public:

    explicit UpdateHostedZoneCommentResponsePrivate(UpdateHostedZoneCommentResponse * const q);

    void parseUpdateHostedZoneCommentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHostedZoneCommentResponse)
    Q_DISABLE_COPY(UpdateHostedZoneCommentResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
