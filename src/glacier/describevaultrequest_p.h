// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVAULTREQUEST_P_H
#define QTAWS_DESCRIBEVAULTREQUEST_P_H

#include "glacierrequest_p.h"
#include "describevaultrequest.h"

namespace QtAws {
namespace Glacier {

class DescribeVaultRequest;

class DescribeVaultRequestPrivate : public GlacierRequestPrivate {

public:
    DescribeVaultRequestPrivate(const GlacierRequest::Action action,
                                   DescribeVaultRequest * const q);
    DescribeVaultRequestPrivate(const DescribeVaultRequestPrivate &other,
                                   DescribeVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
