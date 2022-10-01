// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    UntagResourceRequestPrivate(const CloudHsmV2Request::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
