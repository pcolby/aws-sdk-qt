// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESREQUEST_P_H
#define QTAWS_GETRESOURCEPOLICIESREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "getresourcepoliciesrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetResourcePoliciesRequest;

class GetResourcePoliciesRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    GetResourcePoliciesRequestPrivate(const SsmIncidentsRequest::Action action,
                                   GetResourcePoliciesRequest * const q);
    GetResourcePoliciesRequestPrivate(const GetResourcePoliciesRequestPrivate &other,
                                   GetResourcePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourcePoliciesRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
