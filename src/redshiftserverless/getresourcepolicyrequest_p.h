// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICYREQUEST_P_H
#define QTAWS_GETRESOURCEPOLICYREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getresourcepolicyrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetResourcePolicyRequest;

class GetResourcePolicyRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetResourcePolicyRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetResourcePolicyRequest * const q);
    GetResourcePolicyRequestPrivate(const GetResourcePolicyRequestPrivate &other,
                                   GetResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourcePolicyRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
