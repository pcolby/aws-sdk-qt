// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESILIENCYPOLICYREQUEST_P_H
#define QTAWS_DELETERESILIENCYPOLICYREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "deleteresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteResiliencyPolicyRequest;

class DeleteResiliencyPolicyRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DeleteResiliencyPolicyRequestPrivate(const ResilienceHubRequest::Action action,
                                   DeleteResiliencyPolicyRequest * const q);
    DeleteResiliencyPolicyRequestPrivate(const DeleteResiliencyPolicyRequestPrivate &other,
                                   DeleteResiliencyPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
