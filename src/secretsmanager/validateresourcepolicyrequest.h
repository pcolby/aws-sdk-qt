// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATERESOURCEPOLICYREQUEST_H
#define QTAWS_VALIDATERESOURCEPOLICYREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class ValidateResourcePolicyRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT ValidateResourcePolicyRequest : public SecretsManagerRequest {

public:
    ValidateResourcePolicyRequest(const ValidateResourcePolicyRequest &other);
    ValidateResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateResourcePolicyRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
