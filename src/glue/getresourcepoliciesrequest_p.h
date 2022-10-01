// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESREQUEST_P_H
#define QTAWS_GETRESOURCEPOLICIESREQUEST_P_H

#include "gluerequest_p.h"
#include "getresourcepoliciesrequest.h"

namespace QtAws {
namespace Glue {

class GetResourcePoliciesRequest;

class GetResourcePoliciesRequestPrivate : public GlueRequestPrivate {

public:
    GetResourcePoliciesRequestPrivate(const GlueRequest::Action action,
                                   GetResourcePoliciesRequest * const q);
    GetResourcePoliciesRequestPrivate(const GetResourcePoliciesRequestPrivate &other,
                                   GetResourcePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourcePoliciesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
