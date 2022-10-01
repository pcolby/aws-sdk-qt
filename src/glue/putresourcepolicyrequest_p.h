// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEPOLICYREQUEST_P_H
#define QTAWS_PUTRESOURCEPOLICYREQUEST_P_H

#include "gluerequest_p.h"
#include "putresourcepolicyrequest.h"

namespace QtAws {
namespace Glue {

class PutResourcePolicyRequest;

class PutResourcePolicyRequestPrivate : public GlueRequestPrivate {

public:
    PutResourcePolicyRequestPrivate(const GlueRequest::Action action,
                                   PutResourcePolicyRequest * const q);
    PutResourcePolicyRequestPrivate(const PutResourcePolicyRequestPrivate &other,
                                   PutResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResourcePolicyRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
