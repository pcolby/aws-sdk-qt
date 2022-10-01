// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYGROUPREQUEST_P_H
#define QTAWS_DELETEKEYGROUPREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletekeygrouprequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteKeyGroupRequest;

class DeleteKeyGroupRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteKeyGroupRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteKeyGroupRequest * const q);
    DeleteKeyGroupRequestPrivate(const DeleteKeyGroupRequestPrivate &other,
                                   DeleteKeyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
