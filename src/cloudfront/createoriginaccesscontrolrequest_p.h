// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINACCESSCONTROLREQUEST_P_H
#define QTAWS_CREATEORIGINACCESSCONTROLREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginAccessControlRequest;

class CreateOriginAccessControlRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateOriginAccessControlRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateOriginAccessControlRequest * const q);
    CreateOriginAccessControlRequestPrivate(const CreateOriginAccessControlRequestPrivate &other,
                                   CreateOriginAccessControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOriginAccessControlRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
