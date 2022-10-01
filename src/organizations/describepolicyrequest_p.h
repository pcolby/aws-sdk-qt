// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICYREQUEST_P_H
#define QTAWS_DESCRIBEPOLICYREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DescribePolicyRequest;

class DescribePolicyRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribePolicyRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribePolicyRequest * const q);
    DescribePolicyRequestPrivate(const DescribePolicyRequestPrivate &other,
                                   DescribePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
