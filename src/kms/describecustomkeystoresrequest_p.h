// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMKEYSTORESREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMKEYSTORESREQUEST_P_H

#include "kmsrequest_p.h"
#include "describecustomkeystoresrequest.h"

namespace QtAws {
namespace Kms {

class DescribeCustomKeyStoresRequest;

class DescribeCustomKeyStoresRequestPrivate : public KmsRequestPrivate {

public:
    DescribeCustomKeyStoresRequestPrivate(const KmsRequest::Action action,
                                   DescribeCustomKeyStoresRequest * const q);
    DescribeCustomKeyStoresRequestPrivate(const DescribeCustomKeyStoresRequestPrivate &other,
                                   DescribeCustomKeyStoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomKeyStoresRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
