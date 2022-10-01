// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECRETREQUEST_P_H
#define QTAWS_DESCRIBESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "describesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class DescribeSecretRequest;

class DescribeSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    DescribeSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   DescribeSecretRequest * const q);
    DescribeSecretRequestPrivate(const DescribeSecretRequestPrivate &other,
                                   DescribeSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
