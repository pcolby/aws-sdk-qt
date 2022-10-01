// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "greengrassrequest_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace Greengrass {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public GreengrassRequestPrivate {

public:
    UntagResourceRequestPrivate(const GreengrassRequest::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
