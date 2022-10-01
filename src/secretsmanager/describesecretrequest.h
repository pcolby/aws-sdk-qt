// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECRETREQUEST_H
#define QTAWS_DESCRIBESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class DescribeSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT DescribeSecretRequest : public SecretsManagerRequest {

public:
    DescribeSecretRequest(const DescribeSecretRequest &other);
    DescribeSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
