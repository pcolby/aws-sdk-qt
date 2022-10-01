// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESILIENCYPOLICYREQUEST_P_H
#define QTAWS_CREATERESILIENCYPOLICYREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "createresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class CreateResiliencyPolicyRequest;

class CreateResiliencyPolicyRequestPrivate : public ResilienceHubRequestPrivate {

public:
    CreateResiliencyPolicyRequestPrivate(const ResilienceHubRequest::Action action,
                                   CreateResiliencyPolicyRequest * const q);
    CreateResiliencyPolicyRequestPrivate(const CreateResiliencyPolicyRequestPrivate &other,
                                   CreateResiliencyPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
