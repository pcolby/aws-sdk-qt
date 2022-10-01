// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPPOLICYREQUEST_P_H
#define QTAWS_LOOKUPPOLICYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "lookuppolicyrequest.h"

namespace QtAws {
namespace CloudDirectory {

class LookupPolicyRequest;

class LookupPolicyRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    LookupPolicyRequestPrivate(const CloudDirectoryRequest::Action action,
                                   LookupPolicyRequest * const q);
    LookupPolicyRequestPrivate(const LookupPolicyRequestPrivate &other,
                                   LookupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(LookupPolicyRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
