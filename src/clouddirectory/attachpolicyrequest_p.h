// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYREQUEST_P_H
#define QTAWS_ATTACHPOLICYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "attachpolicyrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachPolicyRequest;

class AttachPolicyRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    AttachPolicyRequestPrivate(const CloudDirectoryRequest::Action action,
                                   AttachPolicyRequest * const q);
    AttachPolicyRequestPrivate(const AttachPolicyRequestPrivate &other,
                                   AttachPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachPolicyRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
