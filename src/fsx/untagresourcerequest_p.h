// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "fsxrequest_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace FSx {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public FSxRequestPrivate {

public:
    UntagResourceRequestPrivate(const FSxRequest::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
