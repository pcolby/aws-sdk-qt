// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLICATIONPOLICYREQUEST_P_H
#define QTAWS_PUTAPPLICATIONPOLICYREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "putapplicationpolicyrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class PutApplicationPolicyRequest;

class PutApplicationPolicyRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    PutApplicationPolicyRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   PutApplicationPolicyRequest * const q);
    PutApplicationPolicyRequestPrivate(const PutApplicationPolicyRequestPrivate &other,
                                   PutApplicationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutApplicationPolicyRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
