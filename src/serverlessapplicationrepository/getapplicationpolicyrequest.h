// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONPOLICYREQUEST_H
#define QTAWS_GETAPPLICATIONPOLICYREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetApplicationPolicyRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT GetApplicationPolicyRequest : public ServerlessApplicationRepositoryRequest {

public:
    GetApplicationPolicyRequest(const GetApplicationPolicyRequest &other);
    GetApplicationPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationPolicyRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
