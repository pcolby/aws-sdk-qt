// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINACCESSCONTROLREQUEST_P_H
#define QTAWS_UPDATEORIGINACCESSCONTROLREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updateoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateOriginAccessControlRequest;

class UpdateOriginAccessControlRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateOriginAccessControlRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateOriginAccessControlRequest * const q);
    UpdateOriginAccessControlRequestPrivate(const UpdateOriginAccessControlRequestPrivate &other,
                                   UpdateOriginAccessControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOriginAccessControlRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
