// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace ResilienceHub {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public ResilienceHubRequestPrivate {

public:
    UntagResourceRequestPrivate(const ResilienceHubRequest::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
