// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTEDZONECOMMENTREQUEST_P_H
#define QTAWS_UPDATEHOSTEDZONECOMMENTREQUEST_P_H

#include "route53request_p.h"
#include "updatehostedzonecommentrequest.h"

namespace QtAws {
namespace Route53 {

class UpdateHostedZoneCommentRequest;

class UpdateHostedZoneCommentRequestPrivate : public Route53RequestPrivate {

public:
    UpdateHostedZoneCommentRequestPrivate(const Route53Request::Action action,
                                   UpdateHostedZoneCommentRequest * const q);
    UpdateHostedZoneCommentRequestPrivate(const UpdateHostedZoneCommentRequestPrivate &other,
                                   UpdateHostedZoneCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHostedZoneCommentRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
