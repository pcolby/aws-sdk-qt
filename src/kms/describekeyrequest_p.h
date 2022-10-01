// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYREQUEST_P_H
#define QTAWS_DESCRIBEKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "describekeyrequest.h"

namespace QtAws {
namespace Kms {

class DescribeKeyRequest;

class DescribeKeyRequestPrivate : public KmsRequestPrivate {

public:
    DescribeKeyRequestPrivate(const KmsRequest::Action action,
                                   DescribeKeyRequest * const q);
    DescribeKeyRequestPrivate(const DescribeKeyRequestPrivate &other,
                                   DescribeKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
