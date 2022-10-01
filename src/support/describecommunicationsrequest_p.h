// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMUNICATIONSREQUEST_P_H
#define QTAWS_DESCRIBECOMMUNICATIONSREQUEST_P_H

#include "supportrequest_p.h"
#include "describecommunicationsrequest.h"

namespace QtAws {
namespace Support {

class DescribeCommunicationsRequest;

class DescribeCommunicationsRequestPrivate : public SupportRequestPrivate {

public:
    DescribeCommunicationsRequestPrivate(const SupportRequest::Action action,
                                   DescribeCommunicationsRequest * const q);
    DescribeCommunicationsRequestPrivate(const DescribeCommunicationsRequestPrivate &other,
                                   DescribeCommunicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCommunicationsRequest)

};

} // namespace Support
} // namespace QtAws

#endif
