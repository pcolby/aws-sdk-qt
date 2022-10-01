// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESILIENCYPOLICYREQUEST_P_H
#define QTAWS_UPDATERESILIENCYPOLICYREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "updateresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class UpdateResiliencyPolicyRequest;

class UpdateResiliencyPolicyRequestPrivate : public ResilienceHubRequestPrivate {

public:
    UpdateResiliencyPolicyRequestPrivate(const ResilienceHubRequest::Action action,
                                   UpdateResiliencyPolicyRequest * const q);
    UpdateResiliencyPolicyRequestPrivate(const UpdateResiliencyPolicyRequestPrivate &other,
                                   UpdateResiliencyPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
