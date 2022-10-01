// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPOLICYREQUEST_P_H
#define QTAWS_DETACHPOLICYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "detachpolicyrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachPolicyRequest;

class DetachPolicyRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DetachPolicyRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DetachPolicyRequest * const q);
    DetachPolicyRequestPrivate(const DetachPolicyRequestPrivate &other,
                                   DetachPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachPolicyRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
