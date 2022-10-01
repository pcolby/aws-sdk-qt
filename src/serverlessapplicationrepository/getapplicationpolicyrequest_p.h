// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONPOLICYREQUEST_P_H
#define QTAWS_GETAPPLICATIONPOLICYREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "getapplicationpolicyrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetApplicationPolicyRequest;

class GetApplicationPolicyRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    GetApplicationPolicyRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   GetApplicationPolicyRequest * const q);
    GetApplicationPolicyRequestPrivate(const GetApplicationPolicyRequestPrivate &other,
                                   GetApplicationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationPolicyRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
